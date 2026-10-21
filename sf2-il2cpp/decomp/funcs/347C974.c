// Nekki.SF2.GUI.Dialogs.ItemSetDialog$$GKPJMHOFIOO @ RVA 0x347C974

void Nekki_SF2_GUI_Dialogs_ItemSetDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this,MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_HintBox_o *pNVar1;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *in_x3;
  HHKELHDGPDO_o *pHVar2;
  LabelButton_o *pLVar3;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
                    /* try { // try from 0357c984 to 0367c987 has its CatchHandler @ 0357cdbc */
                    /* try { // try from 0357c988 to 0367c98f has its CatchHandler @ 0357cdf0 */
  if ((DAT_0456835d & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_ItemSetDialog_OCAPCHIKABJ__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 0357c9a4 to 0367c9ab has its CatchHandler @ 0357cdd4 */
    FUN_01bab630(&StringLiteral_22457);
                    /* try { // try from 0357c9b4 to 0367c9bb has its CatchHandler @ 0357cde8 */
    DAT_0456835d = 1;
  }
  pHVar2 = (__this->fields).PAAIEEFEBKK;
  if (pHVar2 != (HHKELHDGPDO_o *)0x0) {
                    /* try { // try from 0357c9cc to 0367c9d3 has its CatchHandler @ 0357cdd8 */
    Nekki_SF2_GUI_Dialogs_ItemSetDialog__GKJKNKCEMPN
              (__this,(__this->fields).WeaponItem,(pHVar2->fields).GNCBIPJFEGB,
               (pHVar2->fields).AAKCIMHACFK,in_x3);
    pHVar2 = (__this->fields).PAAIEEFEBKK;
                    /* try { // try from 0357c9d8 to 0367c9df has its CatchHandler @ 0357cdd0 */
    if (pHVar2 != (HHKELHDGPDO_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_ItemSetDialog__GKJKNKCEMPN
                (__this,(__this->fields).ArmorItem,(pHVar2->fields).EIFDIMKJDMN,
                 (pHVar2->fields).PJBDNBPBCGN,in_x3);
                    /* try { // try from 0357c9f0 to 0367c9f7 has its CatchHandler @ 0357cdcc */
      pHVar2 = (__this->fields).PAAIEEFEBKK;
      if (pHVar2 != (HHKELHDGPDO_o *)0x0) {
                    /* try { // try from 0357c9f8 to 0367ca0b has its CatchHandler @ 0357cdc4 */
        Nekki_SF2_GUI_Dialogs_ItemSetDialog__GKJKNKCEMPN
                  (__this,(__this->fields).HelmItem,(pHVar2->fields).CFJEFNDGHIP,
                   (pHVar2->fields).OLHBGKCMDNM,in_x3);
        pHVar2 = (__this->fields).PAAIEEFEBKK;
                    /* try { // try from 0357ca10 to 0367ca1b has its CatchHandler @ 0357cddc */
        if (pHVar2 != (HHKELHDGPDO_o *)0x0) {
                    /* try { // try from 0357ca1c to 0367ca27 has its CatchHandler @ 0357cde0 */
          Nekki_SF2_GUI_Dialogs_ItemSetDialog__GKJKNKCEMPN
                    (__this,(__this->fields).RangedItem,(pHVar2->fields).DLDBBBCMJOC,
                     (pHVar2->fields).KGIBFODAFEG,in_x3);
          pHVar2 = (__this->fields).PAAIEEFEBKK;
                    /* try { // try from 0357ca2c to 0367ca33 has its CatchHandler @ 0357cde4 */
          if (pHVar2 != (HHKELHDGPDO_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_ItemSetDialog__GKJKNKCEMPN
                      (__this,(__this->fields).MagicItem,(pHVar2->fields).OGOPJDCOPDF,
                       (pHVar2->fields).HAPHNIMNDLG,in_x3);
            pHVar2 = (__this->fields).PAAIEEFEBKK;
            if (pHVar2 != (HHKELHDGPDO_o *)0x0) {
                    /* try { // try from 0357ca4c to 0367ca53 has its CatchHandler @ 0357cdb8 */
                    /* try { // try from 0357ca5c to 0367ca63 has its CatchHandler @ 0357cdb4 */
              __this_00 = (__this->fields).Description;
              CJNHFNHJHPE = System_String__Format
                                      (StringLiteral_22457,
                                       (Il2CppObject *)(pHVar2->fields).BPCADJLKKGA,
                                       (Il2CppObject *)(pHVar2->fields).DHODPAHPFKN,
                                       (Il2CppObject *)(pHVar2->fields).CKPABMMCGGJ,
                                       (MethodInfo *)0x0);
              if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 0357ca74 to 0367ca7b has its CatchHandler @ 0357cd2c */
                Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 0357ca80 to 0367ca87 has its CatchHandler @ 0357cdac */
                pNVar1 = (__this->fields).HintBox;
                if (pNVar1 != (Nekki_SF2_GUI_HintBox_o *)0x0) {
                    /* try { // try from 0357ca98 to 0367ca9f has its CatchHandler @ 0357cdb0 */
                    /* try { // try from 0357caa0 to 0367cab3 has its CatchHandler @ 0357cd30 */
                  (*(pNVar1->klass->vtable)._4_Init.methodPtr)
                            (0x442f0000,0x43480000,pNVar1,(pNVar1->klass->vtable)._4_Init.method);
                  pLVar3 = (__this->fields).super._btnOK;
                  if (pLVar3 != (LabelButton_o *)0x0) {
                    /* try { // try from 0357cab8 to 0367cac3 has its CatchHandler @ 0357cd68 */
                    __this_01 = (UnityEngine_Events_UnityEvent_o *)
                                (pLVar3->fields).super.super.super.m_OnClick;
                    /* try { // try from 0357cac4 to 0367cacf has its CatchHandler @ 0357cd88 */
                    call = (UnityEngine_Events_UnityAction_o *)
                           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    UnityEngine_Events_UnityAction___ctor();
                    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0357cae0 to 0367cae7 has its CatchHandler @ 0357cd34 */
                    /* try { // try from 0357caf0 to 0367caf7 has its CatchHandler @ 0357cd40 */
                      UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

