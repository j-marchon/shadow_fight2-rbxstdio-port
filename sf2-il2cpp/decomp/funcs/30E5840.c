// Nekki.SF2.Core.InputControllers.GamePadController$$HFGFAAAMDBL @ RVA 0x30E5840

void Nekki_SF2_Core_InputControllers_GamePadController__HFGFAAAMDBL
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,uint64_t JLKIJGFFPGO,
               float MFOOPLCENAN,MethodInfo *method)

{
  int32_t iVar1;
  CKOFPNFDDAB_o *pCVar2;
  long lVar3;
  
  iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                    (__this,(MethodInfo *)JLKIJGFFPGO);
  if (iVar1 == 0) {
    return;
  }
  pCVar2 = (__this->fields).AEKEGMAOOHO;
                    /* try { // try from 031e5860 to 032e588f has its CatchHandler @ 031e58ec */
  if ((pCVar2 == (CKOFPNFDDAB_o *)0x0) ||
     (lVar3 = (*(pCVar2->klass->vtable)._10_GetInvocationList.methodPtr)
                        (pCVar2,(pCVar2->klass->vtable)._10_GetInvocationList.method), lVar3 == 0))
  {
LAB_031e5928:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (*(int *)(lVar3 + 0x18) < 2) {
    pCVar2 = (__this->fields).AHGJIANNLBP;
                    /* try { // try from 031e5890 to 032e589b has its CatchHandler @ 031e58dc */
    if ((pCVar2 == (CKOFPNFDDAB_o *)0x0) ||
       (lVar3 = (*(pCVar2->klass->vtable)._10_GetInvocationList.methodPtr)
                          (pCVar2,(pCVar2->klass->vtable)._10_GetInvocationList.method), lVar3 == 0)
       ) goto LAB_031e5928;
                    /* try { // try from 031e589c to 032e58d3 has its CatchHandler @ 031e56ac */
    if (*(int *)(lVar3 + 0x18) < 2) goto LAB_031e58e8;
  }
  if (DAT_0456647c == '\0') {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_0456647c = '\x01';
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* try { // try from 031e58d4 to 032e58d7 has its CatchHandler @ 031e58e0 */
  }
                    /* try { // try from 031e58d8 to 032e5903 has its CatchHandler @ 031e56ac */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5890 with catch @ 031e58dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e58d4 with catch @ 031e58e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e57bc with catch @ 031e58e4
                        */
  Nekki_SF2_Core_InputControllers_GamePadController__PHBLONJEDFH
            (__this,InControl_InputManager_TypeInfo->static_fields->Devices,method);
LAB_031e58e8:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5800 with catch @ 031e58e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5860 with catch @ 031e58ec
                        */
  if (DAT_0456647c == '\0') {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_0456647c = '\x01';
  }
                    /* try { // try from 031e5904 to 032e5907 has its CatchHandler @ 031e5930 */
                    /* try { // try from 031e5908 to 032e5937 has its CatchHandler @ 031e56ac */
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished != 0) {
    return;
  }
  thunk_FUN_01ba7564();
  return;
}

