// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeImageCell$$Init @ RVA 0x357143C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeImageCell__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeImageCell_o *__this,
               IILNJJJFGLL_o *IMMNELPBGIF,Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,
               MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  System_String_o *value;
  BHEDGAKGKPO_StaticFields *pBVar3;
  
                    /* try { // try from 03671458 to 0377145f has its CatchHandler @ 03673428 */
  if ((DAT_04568c63 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
                    /* try { // try from 03671474 to 03771497 has its CatchHandler @ 036734a4 */
    FUN_01bab630(&GJKKGBIAPFL_TypeInfo);
    FUN_01bab630(&StringLiteral_4216);
    DAT_04568c63 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeCell__Init
            ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeCell_o *)__this,IMMNELPBGIF,
             MGFBPKIBNJI,(MethodInfo *)0x0);
  if (IMMNELPBGIF != (IILNJJJFGLL_o *)0x0) {
                    /* try { // try from 036714a4 to 037714b3 has its CatchHandler @ 03673404 */
                    /* try { // try from 036714b8 to 037714bf has its CatchHandler @ 03673408 */
    bVar1 = (GJKKGBIAPFL_TypeInfo->_2).naturalAligment;
                    /* try { // try from 036714d0 to 037714df has its CatchHandler @ 0367340c */
    if (((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
        ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)GJKKGBIAPFL_TypeInfo)) &&
       (pNVar2 = (__this->fields)._image, pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
                    /* try { // try from 036714ec to 037714f3 has its CatchHandler @ 03673384 */
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (pNVar2,(System_String_o *)IMMNELPBGIF[1].klass,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._image;
      if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03671504 to 0377150b has its CatchHandler @ 03673368 */
        thunk_FUN_01ba7564();
      }
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
                    /* try { // try from 03671518 to 0377151f has its CatchHandler @ 03673388 */
                    /* try { // try from 03671530 to 03771537 has its CatchHandler @ 0367336c */
        (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                  ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                   (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar2,
                   (pNVar2->klass->vtable)._23_set_color.method);
                    /* try { // try from 03671538 to 03771547 has its CatchHandler @ 0367338c */
        value = System_String__Concat
                          (StringLiteral_4216,(System_String_o *)IMMNELPBGIF[1].klass,
                           (MethodInfo *)0x0);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)__this,value,(MethodInfo *)0x0);
                    /* try { // try from 03671558 to 0377155f has its CatchHandler @ 03673370 */
                    /* try { // try from 03671570 to 03771577 has its CatchHandler @ 03673390 */
                    /* WARNING: Could not recover jumptable at 0x03671578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(__this->klass->vtable)._52_SetContentScale.methodPtr)
                  (0x3f800000,__this,(__this->klass->vtable)._52_SetContentScale.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

