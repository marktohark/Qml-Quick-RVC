import QtQuick 2.10
import QtQuick.Window 2.10

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Rectangle {
        anchors.fill: parent
        color: "#FF00FF"
        MouseArea {
            anchors.fill: parent
            onClicked: {
                Route.post("ExampleController@exampleFunc")
            }
        }
    }

}
