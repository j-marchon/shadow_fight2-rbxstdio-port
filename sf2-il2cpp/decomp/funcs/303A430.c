// LJNJDFEAIOH$$HDMPAKAHHJG @ RVA 0x303A430

void LJNJDFEAIOH__HDMPAKAHHJG(LJNJDFEAIOH_o *__this,AADKBCFCLKK_o *IIPPMAOIKHB,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *__this_00;
  NODLJPNGNBG_o *OGFALADNBHC;
  MethodInfo *method_00;
  int index;
  
  if ((DAT_04565d71 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__);
    DAT_04565d71 = 1;
  }
  if ((IIPPMAOIKHB != (AADKBCFCLKK_o *)0x0) &&
     (__this_00 = (IIPPMAOIKHB->fields).MPAIPMANDEO,
     __this_00 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0)) {
    iVar1 = (__this_00->fields).count;
    if (iVar1 < 1) {
      return;
    }
    index = 0;
    do {
      method_00 = Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__;
      OGFALADNBHC = (NODLJPNGNBG_o *)
                    Google_Protobuf_Collections_RepeatedField<object>__get_Item
                              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index,
                               (MethodInfo_295F6AC *)
                               Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__
                              );
      LJNJDFEAIOH__KBAHEGDFCBI(__this,OGFALADNBHC,method_00);
      if (iVar1 + -1 == index) {
        return;
      }
      __this_00 = (IIPPMAOIKHB->fields).MPAIPMANDEO;
      index = index + 1;
    } while (__this_00 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

