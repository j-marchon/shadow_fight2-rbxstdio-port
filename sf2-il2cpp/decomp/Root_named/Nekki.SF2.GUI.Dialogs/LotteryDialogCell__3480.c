// TypeDefIndex 3480
// Namespace: Nekki.SF2.GUI.Dialogs
// public class LotteryDialogCell : BaseRewardCell
// Fields:

// ===== public string get_CancellingItem()  [RVA 0x356FAD8]
// Nekki.SF2.GUI.Dialogs.LotteryDialogCell$$get_CancellingItem @ RVA 0x356FAD8

System_String_o *
Nekki_SF2_GUI_Dialogs_LotteryDialogCell__get_CancellingItem
          (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *__this,MethodInfo *method)

{
  byte bVar1;
  BCOICIIDFPD_o *pBVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
                    /* try { // try from 0366fad8 to 0376fadf has its CatchHandler @ 03672ca8 */
                    /* try { // try from 0366faec to 0376faf3 has its CatchHandler @ 03672ca4 */
  if ((DAT_04568c54 & 1) == 0) {
    auVar3 = FUN_01bab630(&DILGLGMKOFG_TypeInfo);
    DAT_04568c54 = 1;
  }
                    /* try { // try from 0366fb04 to 0376fb0b has its CatchHandler @ 03672ca0 */
  pBVar2 = (__this->fields).super.RewardData;
  if (pBVar2 != (BCOICIIDFPD_o *)0x0) {
                    /* try { // try from 0366fb0c to 0376fb1f has its CatchHandler @ 03673058 */
    bVar1 = (DILGLGMKOFG_TypeInfo->_2).naturalAligment;
                    /* try { // try from 0366fb24 to 0376fb2f has its CatchHandler @ 03672c9c */
    if ((bVar1 <= (pBVar2->klass->_2).naturalAligment) &&
       ((pBVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)DILGLGMKOFG_TypeInfo))
    {
                    /* try { // try from 0366fb48 to 0376fb4b has its CatchHandler @ 03673328 */
                    /* try { // try from 0366fb4c to 0376fb4f has its CatchHandler @ 03672bd0 */
      return (System_String_o *)pBVar2[1].klass;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}


// ===== protected override void IBPGLHOKFFM(OCOEAJMJEOP AKOOAFJLOFD)  [RVA 0x356FB54]
// Nekki.SF2.GUI.Dialogs.LotteryDialogCell$$IBPGLHOKFFM @ RVA 0x356FB54

void Nekki_SF2_GUI_Dialogs_LotteryDialogCell__IBPGLHOKFFM
               (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *__this,OCOEAJMJEOP_o *AKOOAFJLOFD,
               MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  BCOICIIDFPD_o *pBVar4;
  
                    /* try { // try from 0366fb60 to 0376fb67 has its CatchHandler @ 03672bd4 */
  if ((DAT_04568c55 & 1) == 0) {
                    /* try { // try from 0366fb78 to 0376fb7f has its CatchHandler @ 03672bcc */
    FUN_01bab630(&DILGLGMKOFG_TypeInfo);
    FUN_01bab630(&StringLiteral_22119/*"x5"*/);
                    /* try { // try from 0366fb8c to 0376fb93 has its CatchHandler @ 03672bc8 */
    DAT_04568c55 = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseRewardCell__IBPGLHOKFFM
            ((Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *)__this,AKOOAFJLOFD,(MethodInfo *)0x0);
  pBVar4 = (__this->fields).super.RewardData;
                    /* try { // try from 0366fba4 to 0376fbab has its CatchHandler @ 03672bc4 */
  if (pBVar4 != (BCOICIIDFPD_o *)0x0) {
                    /* try { // try from 0366fbac to 0376fbbf has its CatchHandler @ 03672bc0 */
    bVar1 = (DILGLGMKOFG_TypeInfo->_2).naturalAligment;
                    /* try { // try from 0366fbc0 to 0376fbcb has its CatchHandler @ 03672bbc */
    if ((bVar1 <= (pBVar4->klass->_2).naturalAligment) &&
       ((pBVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)DILGLGMKOFG_TypeInfo))
    {
      if ((pBVar4->fields).field_0x3c == '\0') {
        return;
      }
                    /* try { // try from 0366fbe4 to 0376fbe7 has its CatchHandler @ 03673328 */
      pNVar2 = (__this->fields).super.SlotCount;
                    /* try { // try from 0366fbe8 to 0376fbeb has its CatchHandler @ 03672b64 */
      if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0366fbfc to 0376fc03 has its CatchHandler @ 03672b68 */
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        pNVar2 = (__this->fields).super.SlotCount;
        if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 0366fc14 to 0376fc1b has its CatchHandler @ 03672b60 */
          (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                    (pNVar2,StringLiteral_22119/*"x5"*/,(pNVar2->klass->vtable)._75_set_text.method);
                    /* try { // try from 0366fc28 to 0376fc2f has its CatchHandler @ 03672b5c */
          __this_00 = (__this->fields).super.PerkContainer;
          if ((__this_00 != (UnityEngine_Transform_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0366fc40 to 0376fc47 has its CatchHandler @ 03672b58 */
                    /* try { // try from 0366fc48 to 0376fc5b has its CatchHandler @ 03672b54 */
            UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0366fc5c to 0376fc67 has its CatchHandler @ 03672b50 */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x356FC60]
// Nekki.SF2.GUI.Dialogs.LotteryDialogCell$$.ctor @ RVA 0x356FC60

void Nekki_SF2_GUI_Dialogs_LotteryDialogCell___ctor
               (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseRewardCell___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *)__this,(MethodInfo *)0x0);
  return;
}

