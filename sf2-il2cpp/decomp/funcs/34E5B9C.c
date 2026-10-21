// NGOFOPOGBMJ$$WriteTo @ RVA 0x34E5B9C

void NGOFOPOGBMJ__WriteTo
               (NGOFOPOGBMJ_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
                    /* try { // try from 035e5ba4 to 036e5bab has its CatchHandler @ 035e5cc8 */
  if ((__this->fields).GDKPGIBMFPA != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 035e5bb8 to 036e5bc7 has its CatchHandler @ 035e5cbc */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
                    /* try { // try from 035e5bc8 to 036e5bdb has its CatchHandler @ 035e5cc0 */
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).GDKPGIBMFPA,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
                    /* try { // try from 035e5bdc to 036e5c7f has its CatchHandler @ 035e5998 */
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}

