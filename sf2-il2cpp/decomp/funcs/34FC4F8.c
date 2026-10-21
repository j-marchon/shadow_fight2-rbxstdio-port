// Nekki.SF2.GUI.Common.Hints.HintGroup$$GMGNDMJDBAL @ RVA 0x34FC4F8

void Nekki_SF2_GUI_Common_Hints_HintGroup__GMGNDMJDBAL
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_HintUI__o *result;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = __this;
                    /* try { // try from 035fc508 to 036fc50f has its CatchHandler @ 035fc5c8 */
  if ((DAT_0456882b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentsInChildren<HintUI>__);
                    /* try { // try from 035fc524 to 036fc527 has its CatchHandler @ 035fc5bc */
    auVar1 = FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_Clear__);
                    /* try { // try from 035fc528 to 036fc52f has its CatchHandler @ 035fc5c0 */
    DAT_0456882b = 1;
  }
  result = (__this->fields).DEDJHBCOMCJ;
  if (result != (System_Collections_Generic_List_HintUI__o *)0x0) {
    length = (result->fields)._size;
    (result->fields)._size = 0;
    (result->fields)._version = (result->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(result->fields)._items,0,length,(MethodInfo *)0x0);
      result = (__this->fields).DEDJHBCOMCJ;
    }
                    /* try { // try from 035fc56c to 036fc58f has its CatchHandler @ 035fc5c4 */
    UnityEngine_Component__GetComponentsInChildren<object>
              ((UnityEngine_Component_o *)__this,true,(System_Collections_Generic_List_T__o *)result
               ,Method_UnityEngine_Component_GetComponentsInChildren<HintUI>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar1._0_8_,auVar1._8_8_);
}

