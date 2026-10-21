// Nekki.Utils.RaidBetaLogger$$ShowSendButton @ RVA 0x359D320

void Nekki_Utils_RaidBetaLogger__ShowSendButton
               (Nekki_Utils_RaidBetaLogger_o *__this,bool IILAOHIFFPI,bool KBDIPAGLDFG,
               MethodInfo *method)

{
  UnityEngine_UI_Button_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar2;
  
                    /* try { // try from 0369d320 to 0379d35b has its CatchHandler @ 0369ce10 */
  if ((DAT_04568dd9 & 1) == 0) {
                    /* catch() { ... } // from try @ 0369d31c with catch @ 0369d34c */
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<Text>__);
    DAT_04568dd9 = 1;
  }
  pUVar1 = (__this->fields)._userReportButton;
                    /* try { // try from 0369d35c to 0379d36f has its CatchHandler @ 0369d3d4 */
  if ((pUVar1 != (UnityEngine_UI_Button_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                    /* catch() { ... } // from try @ 0369d164 with catch @ 0369d370
                       try { // try from 0369d370 to 0379d387 has its CatchHandler @ 0369ce10 */
                    /* catch() { ... } // from try @ 0369d2b4 with catch @ 0369d374 */
    UnityEngine_GameObject__SetActive(__this_00,IILAOHIFFPI,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0369d1d0 with catch @ 0369d378 */
    pUVar1 = (__this->fields)._userReportButton;
    if (pUVar1 != (UnityEngine_UI_Button_o *)0x0) {
                    /* try { // try from 0369d388 to 0379d38b has its CatchHandler @ 0369d3b0 */
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pUVar1,KBDIPAGLDFG,(MethodInfo *)0x0);
                    /* try { // try from 0369d38c to 0379d3b7 has its CatchHandler @ 0369ce10 */
      pUVar1 = (__this->fields)._userReportButton;
      if ((pUVar1 != (UnityEngine_UI_Button_o *)0x0) &&
         (pIVar2 = UnityEngine_Component__GetComponentInChildren<object>
                             ((UnityEngine_Component_o *)pUVar1,
                              Method_UnityEngine_Component_GetComponentInChildren<Text>__),
         pIVar2 != (Il2CppObject *)0x0)) {
                    /* catch() { ... } // from try @ 0369d388 with catch @ 0369d3b0 */
                    /* try { // try from 0369d3b8 to 0379d3bf has its CatchHandler @ 0369d3d4 */
        (*pIVar2->klass->vtable[0x16].methodPtr)(pIVar2,pIVar2->klass->vtable[0x16].method);
                    /* try { // try from 0369d3c0 to 0379d3cb has its CatchHandler @ 0369ce10 */
                    /* try { // try from 0369d3cc to 0379d3d3 has its CatchHandler @ 0369d3d4 */
                    /* catch() { ... } // from try @ 0369d29c with catch @ 0369d3d4
                       catch() { ... } // from try @ 0369d35c with catch @ 0369d3d4
                       catch() { ... } // from try @ 0369d3b8 with catch @ 0369d3d4
                       catch() { ... } // from try @ 0369d3cc with catch @ 0369d3d4 */
                    /* WARNING: Could not recover jumptable at 0x0369d3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pIVar2->klass->vtable[0x17].methodPtr)(pIVar2,pIVar2->klass->vtable[0x17].method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

