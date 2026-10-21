// FCJBEKHDLAF$$OANGGKCBAOJ @ RVA 0x33F3AD8

void FCJBEKHDLAF__OANGGKCBAOJ(FCJBEKHDLAF_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  System_Action_o *CGLKNMPIAJF;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_00;
  InControl_InputDevice_o *pIVar1;
  int32_t JAAOHJPCHMO;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  AFFHKININGD_o *pAVar2;
  
  method_00 = (MethodInfo *)(ulong)(uint)ACCIHBHMFPN;
  if ((DAT_04567f37 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_FCJBEKHDLAF_PCNGICPKPLH__);
    DAT_04567f37 = 1;
    method_00 = extraout_x1;
  }
  if (ACCIHBHMFPN == 2) {
    FCJBEKHDLAF__DKNHPMGMNDK(__this,false,method);
    return;
  }
  if (ACCIHBHMFPN != 1) {
    if (ACCIHBHMFPN == 0) {
      FCJBEKHDLAF__FBPLMFJDFFK(__this,method_00);
      return;
    }
    return;
  }
  CGLKNMPIAJF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  pAVar2 = (__this->fields).FBFPLEFCDOK;
  if (pAVar2 != (AFFHKININGD_o *)0x0) {
    if ((pAVar2->fields).JDNKKGPNHPB == 0x11) {
      __this_00 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
      if ((__this_00 == (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) ||
         (pIVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_ActiveDevice
                             (__this_00,(MethodInfo *)0x0), pIVar1 == (InControl_InputDevice_o *)0x0
         )) goto LAB_034f3bd0;
      JAAOHJPCHMO = (pIVar1->fields).SortOrder;
    }
    else {
      JAAOHJPCHMO = -1;
    }
    JJPNLEPEAFM__EGDMDPJIGPO(CGLKNMPIAJF,JAAOHJPCHMO,(MethodInfo *)0x0);
    return;
  }
LAB_034f3bd0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

