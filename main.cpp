// MiraiCP依赖文件(只需要引入这一个)
#include <MiraiCP.hpp>
using namespace MiraiCP;

// 插件实例
class Main : public CPPPlugin {
  public:
    // 配置插件信息
    Main()
        : CPPPlugin(PluginConfig("mirai-cp", "Mirai Competitive Programming",
                                 "0.0.1", "Thallium54",
                                 "A QQ bot about competitve programming",
                                 "Publish time")) {}
    void onEnable() override {
        // 监听
        // Event::processor.registerEvent<GroupMessageEvent>(
        //     [](GroupMessageEvent e) { 
        //         e.group.sendMessage(e.message);
        //     });

        Event::processor.registerEvent<PrivateMessageEvent>(
            [](PrivateMessageEvent e) {
                if (e.message[0].type() == 0) {
                    e.sender.sendMessage(e.message[0].get<PlainText>().content);
                }
            });
    }

    void onDisable() override { /*插件结束*/
    }
};

// 绑定当前插件实例
void MiraiCP::enrollPlugin() { MiraiCP::enrollPlugin0(new Main()); }
