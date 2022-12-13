import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.0
import QtQuick.Controls.Material 2.3
import QtQml 2.15
Window {
    id:root
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Connections{
        target: testing
        onNotice:{
            console.log("slot called from c++")
            label.text=data
            if(data==="timeout")
            {
                 root.color="red"
            }
    }
}
Button{
    id:button1
    width:100
    height: 100
    onClicked: {
       testing.start()
                {

                        root.color="blue"


         }

}
    }
Button{
    id:button2
    width:100
    height: 100
    x:0
    y:200
    onClicked:{
        testing.stop()
    {
       root.color="yellow"
        }

}
}
Label{
    id:label
    text: " "
  //  x:200
  //  y:200
    anchors.centerIn: parent
    }
}
