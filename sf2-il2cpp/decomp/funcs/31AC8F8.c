// Nekki.SF2.GUI.Pvp.LocationSelectModule$$GetRandomItem @ RVA 0x31AC8F8

System_String_o *
Nekki_SF2_GUI_Pvp_LocationSelectModule__GetRandomItem
          (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this,MethodInfo *method)

{
  uint uVar1;
  JFMLOEMEKLI_array *pJVar2;
  
                    /* try { // try from 032ac8f8 to 033ac91f has its CatchHandler @ 032acb8c */
  pJVar2 = (__this->fields).DLCCJFCKAJL;
  if (pJVar2 != (JFMLOEMEKLI_array *)0x0) {
    uVar1 = UnityEngine_Random__Range(0,(int32_t)pJVar2->max_length,(MethodInfo *)0x0);
    if ((uint)pJVar2->max_length <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    if (pJVar2->m_Items[(int)uVar1] != (JFMLOEMEKLI_o *)0x0) {
                    /* try { // try from 032ac934 to 033ac93b has its CatchHandler @ 032acb64 */
      return (pJVar2->m_Items[(int)uVar1]->fields).PKJEMIDJPAG;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

