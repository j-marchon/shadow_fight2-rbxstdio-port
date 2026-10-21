// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$Close @ RVA 0x30E259C

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__Close
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  System_Action_RaidViewContainer__o *pSVar1;
  
                    /* try { // try from 031e25a0 to 032e25a7 has its CatchHandler @ 031e2730 */
  pSVar1 = (__this->fields).CKNOFAMLBDE;
  if (pSVar1 != (System_Action_RaidViewContainer__o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,__this,(pSVar1->fields).super.super.method);
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031e25dc to 032e2607 has its CatchHandler @ 031e272c */
  FUN_01bab8c8();
}

