// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$HPADIJDOKDN @ RVA 0x3026DB8

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__HPADIJDOKDN
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  MethodInfo *method_00;
  
  pUVar1 = (__this->fields)._taskLayout;
  if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar1 = UnityEngine_GameObject__get_gameObject(pUVar1,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
                    /* catch() { ... } // from try @ 03126db0 with catch @ 03126dd4 */
    method_00 = (MethodInfo *)0x0;
                    /* try { // try from 03126ddc to 03226de3 has its CatchHandler @ 03126df8 */
    UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
                    /* try { // try from 03126de4 to 03226def has its CatchHandler @ 031269b8 */
    Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__SetRefreshButtonVisible(__this,false,method_00);
    pUVar1 = (__this->fields)._noTaskLayout;
                    /* try { // try from 03126df0 to 03226df7 has its CatchHandler @ 03126df8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03126ddc with catch @ 03126df8
                       catch(type#2 @ 00000000) { ... } // from try @ 03126df0 with catch @ 03126df8
                        */
    if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar1 = UnityEngine_GameObject__get_gameObject(pUVar1,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar1,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

