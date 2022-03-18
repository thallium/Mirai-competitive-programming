// MiraiCP依赖文件(只需要引入这一个)
#include "commands.hpp"
#include <MiraiCP.hpp>
using namespace MiraiCP;

// 插件实例
class Main : public CPPPlugin {
  public:
    // 配置插件信息
    Main()
        : CPPPlugin(PluginConfig(
              "mirai-cp", "Mirai Competitive Programming", "0.0.2",
              "Thallium54", "A QQ bot about competitve programming", "2022")) {}
    void onEnable() override {
        setenv("TZ", "/usr/share/zoneinfo/Asia/Shanghai", 1);
        // 监听
        Event::processor.registerEvent<GroupMessageEvent>(
            [](GroupMessageEvent e) {
                if (e.message[0].type() != 0) return;
                const std::string &content =
                    e.message[0].get<PlainText>().content;
                // Logger::logger.info(.substr(0, 3));
                if (content == "帮助") {
                    command::help(e);
                } else if (content == "查比赛") {
                    command::send_future_contests(e);
                } else if (content.substr(0, 10) == "查比赛 ") {
                    if (content.size()<=12 && content.substr(10, 2) == "cf")  {
                        command::send_cf_contests(e);
                    } else {
                        e.group.sendMessage("不支持的比赛平台！");
                    }
                }
            });
    }

    void onDisable() override { /*插件结束*/
    }
};

// 绑定当前插件实例
void MiraiCP::enrollPlugin() { MiraiCP::enrollPlugin0(new Main()); }
