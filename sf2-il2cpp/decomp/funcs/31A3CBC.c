// HGADMOBFBBF$$MergeFrom @ RVA 0x31A3CBC

void HGADMOBFBBF__MergeFrom
               (HGADMOBFBBF_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KDADMJGPAOM_o **ppKVar1;
  HGADMOBFBBF_Fields *pHVar2;
  uint32_t uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  KDADMJGPAOM_o *pKVar5;
  
                    /* try { // try from 032a3ccc to 033a3cef has its CatchHandler @ 032a3d5c */
  if ((DAT_04566af5 & 1) == 0) {
    FUN_01bab630(&KDADMJGPAOM_TypeInfo);
    DAT_04566af5 = 1;
  }
                    /* try { // try from 032a3cf0 to 033a3d4b has its CatchHandler @ 032a3aec */
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    ppKVar1 = &(__this->fields).LHFLMBNKPHF;
    pHVar2 = &__this->fields;
    while( true ) {
      while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar3 == 10) {
        pKVar5 = *ppKVar1;
        if (pKVar5 == (KDADMJGPAOM_o *)0x0) {
                    /* try { // try from 032a3d4c to 033a3d4f has its CatchHandler @ 032a3d60 */
          pKVar5 = (KDADMJGPAOM_o *)thunk_FUN_01bda818(KDADMJGPAOM_TypeInfo);
                    /* try { // try from 032a3d50 to 033a3d57 has its CatchHandler @ 032a3d64 */
                    /* try { // try from 032a3d58 to 033a3d7f has its CatchHandler @ 032a3aec */
          KDADMJGPAOM___ctor(pKVar5,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a3ccc with catch @ 032a3d5c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a3d4c with catch @ 032a3d60
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a3d50 with catch @ 032a3d64
                        */
          *ppKVar1 = pKVar5;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a3c70 with catch @ 032a3d68
                        */
          thunk_FUN_01c20e04(ppKVar1,pKVar5);
          pKVar5 = *ppKVar1;
        }
        Google_Protobuf_CodedInputStream__ReadMessage
                  (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pKVar5,(MethodInfo *)0x0);
      }
      if (uVar3 == 0) break;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pHVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pHVar2->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pHVar2,pGVar4);
    }
                    /* try { // try from 032a3d80 to 033a3d83 has its CatchHandler @ 032a3da4 */
                    /* try { // try from 032a3d84 to 033a3dab has its CatchHandler @ 032a3aec */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

