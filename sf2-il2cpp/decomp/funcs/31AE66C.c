// Nekki.SF2.GUI.LabelAlias$$GBPDDFOIDPG @ RVA 0x31AE66C

void Nekki_SF2_GUI_LabelAlias__GBPDDFOIDPG(Nekki_SF2_GUI_LabelAlias_o *__this,MethodInfo *method)

{
  char cVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_String_o *pSVar3;
  
  if ((DAT_04566b66 & 1) == 0) {
                    /* try { // try from 032ae68c to 033ae693 has its CatchHandler @ 032ae71c */
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_04566b66 = 1;
  }
                    /* try { // try from 032ae6a4 to 033ae6af has its CatchHandler @ 032ae718 */
  bVar2 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 032ae6b4 to 033ae6c3 has its CatchHandler @ 032ae710 */
                    /* try { // try from 032ae6c4 to 033ae707 has its CatchHandler @ 032ae5f8 */
  if ((!bVar2) &&
     (bVar2 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__), bVar2)) {
    bVar2 = PCOEHCPGBBG__EDHHJAMCOJH
                      (*(System_String_o **)&(__this->fields)._useLabelLineSpacing,(MethodInfo *)0x0
                      );
    method_00 = extraout_x1;
    if (!bVar2) {
      pSVar3 = *(System_String_o **)&(__this->fields)._useLabelLineSpacing;
      cVar1 = *(char *)&(__this->fields)._Alias;
      if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 032ae708 to 033ae70b has its CatchHandler @ 032ae714 */
      pSVar3 = KGFBAIBBNNH__KKFDNDIPEHH(pSVar3,cVar1 != '\0',(MethodInfo *)0x0);
                    /* try { // try from 032ae70c to 033ae733 has its CatchHandler @ 032ae5f8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ae6b4 with catch @ 032ae710
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ae708 with catch @ 032ae714
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ae6a4 with catch @ 032ae718
                        */
      Nekki_SF2_GUI_TextPic__set_text((Nekki_SF2_GUI_TextPic_o *)__this,pSVar3,(MethodInfo *)0x0);
      method_00 = extraout_x1_00;
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ae68c with catch @ 032ae71c
                        */
    Nekki_SF2_GUI_LabelAlias__GOLOBCMKJFJ(__this,method_00);
    Nekki_SF2_GUI_LabelAlias__HBHAKJAFIDP(__this,method_01);
                    /* try { // try from 032ae734 to 033ae737 has its CatchHandler @ 032ae760 */
                    /* try { // try from 032ae738 to 033ae767 has its CatchHandler @ 032ae5f8 */
    Nekki_SF2_GUI_LabelAlias__CNHCLPKCGJE(__this,method_02);
    return;
  }
  return;
}

