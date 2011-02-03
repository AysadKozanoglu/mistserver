#include "box.h"
#include <string>

class Box_rtmp {
  public:
    Box_rtmp( );
    ~Box_rtmp();
    Box * GetBox();
    void SetDataReferenceIndex( uint16_t NewIndex = 0 );
    void SetHintTrackVersion( uint16_t NewVersion = 1 );
    void SetHighestCompatibleVersion( uint16_t NewVersion = 1 );
    void SetMaxPacketSize( uint16_t NewSize = 0xFFFF );
    void AddContent( Box * newcontent );
    void WriteContent( );
  private:
    void SetReserved( );
    void SetDefaults( );

    Box * Container;
    Box * Content;
};//Box_ftyp Class

