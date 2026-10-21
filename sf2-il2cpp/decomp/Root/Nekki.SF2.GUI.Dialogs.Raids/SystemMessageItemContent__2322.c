// TypeDefIndex 2322
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class SystemMessageItemContent : MessageItemContent
// Fields:
//   private LabelAlias _title; // 0x20

// ===== public override void UpdateContent(ODKDFMHHLIP IHNKCJHDDKD)  [RVA 0x331E428]
// Nekki.SF2.GUI.Dialogs.Raids.SystemMessageItemContent$$UpdateContent @ RVA 0x331E428

void Nekki_SF2_GUI_Dialogs_Raids_SystemMessageItemContent__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_SystemMessageItemContent_o *__this,
               ODKDFMHHLIP_o *IHNKCJHDDKD,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_0456782b & 1) == 0) {
    FUN_01bab630(&IOHDCPBJGFF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456782b = 1;
  }
  if (IHNKCJHDDKD != (ODKDFMHHLIP_o *)0x0) {
                    /* try { // try from 0341e470 to 0351e477 has its CatchHandler @ 0341e834 */
    bVar1 = (IOHDCPBJGFF_TypeInfo->_2).naturalAligment;
                    /* try { // try from 0341e48c to 0351e48f has its CatchHandler @ 0341e82c */
                    /* try { // try from 0341e490 to 0351e4b7 has its CatchHandler @ 0341e838 */
    if ((bVar1 <= (IHNKCJHDDKD->klass->_2).naturalAligment) &&
       ((IHNKCJHDDKD->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)IOHDCPBJGFF_TypeInfo)) {
      pNVar3 = (__this->fields)._title;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0341e4b8 to 0351e4db has its CatchHandler @ 0341e83c */
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar2) {
        pNVar3 = (__this->fields)._title;
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 0341e4dc to 0351e533 has its CatchHandler @ 0341e350 */
          Nekki_SF2_GUI_LabelAlias__set_Alias
                    (pNVar3,(System_String_o *)IHNKCJHDDKD[1].klass,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
  return;
}


// ===== public void .ctor()  [RVA 0x331E4F8]
// Nekki.SF2.GUI.Dialogs.Raids.SystemMessageItemContent$$.ctor @ RVA 0x331E4F8

void Nekki_SF2_GUI_Dialogs_Raids_SystemMessageItemContent___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_SystemMessageItemContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_MessageItemContent_o *)__this,(MethodInfo *)0x0);
  return;
}

