// HGADMOBFBBF$$.ctor @ RVA 0x31A3844

void HGADMOBFBBF___ctor(HGADMOBFBBF_o *__this,HGADMOBFBBF_o *IBKIPBJJCPG,MethodInfo *method)

{
  KDADMJGPAOM_o *pKVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
                    /* try { // try from 032a3844 to 033a3847 has its CatchHandler @ 032a384c */
                    /* try { // try from 032a3848 to 033a3867 has its CatchHandler @ 032a3774 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a3844 with catch @ 032a384c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a3800 with catch @ 032a3850
                        */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (HGADMOBFBBF_o *)0x0) {
    pKVar1 = (IBKIPBJJCPG->fields).LHFLMBNKPHF;
    if (pKVar1 == (KDADMJGPAOM_o *)0x0) {
                    /* try { // try from 032a38a8 to 033a38af has its CatchHandler @ 032a38b0 */
      pKVar1 = (KDADMJGPAOM_o *)0x0;
    }
    else {
                    /* try { // try from 032a3868 to 033a386b has its CatchHandler @ 032a388c */
                    /* try { // try from 032a386c to 033a3893 has its CatchHandler @ 032a3774 */
      pKVar1 = KDADMJGPAOM__Clone(pKVar1,(MethodInfo *)0x0);
    }
    if (__this != (HGADMOBFBBF_o *)0x0) {
      (__this->fields).LHFLMBNKPHF = pKVar1;
      thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 032a3868 with catch @ 032a388c */
      pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar2;
                    /* try { // try from 032a3894 to 033a389b has its CatchHandler @ 032a38b0 */
                    /* try { // try from 032a389c to 033a38a7 has its CatchHandler @ 032a3774 */
      thunk_FUN_01c20e04(&__this->fields,pGVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032a3894 with catch @ 032a38b0
                       catch(type#2 @ 00000000) { ... } // from try @ 032a38a8 with catch @ 032a38b0
                        */
  FUN_01bab8c8();
}

