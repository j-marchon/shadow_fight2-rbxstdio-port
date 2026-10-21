// Nekki.SF2.GUI.Map.MapScene$$SwitchToMapSceneAndOpenRaidMap @ RVA 0x35892C8

void Nekki_SF2_GUI_Map_MapScene__SwitchToMapSceneAndOpenRaidMap
               (System_Action_o *LILIJINNGNC,MethodInfo *method)

{
  ushort uVar1;
  Nekki_SF2_GUI_Map_MapScene_MIKDLNICFCF_o *__this;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *extraout_x1;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_04568d1d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_MIKDLNICFCF_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568d1d = 1;
    method = extraout_x1;
  }
  __this = (Nekki_SF2_GUI_Map_MapScene_MIKDLNICFCF_o *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_Map_MapScene_MIKDLNICFCF_TypeInfo,method);
  Nekki_SF2_GUI_Map_MapScene_MIKDLNICFCF___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Nekki_SF2_GUI_Map_MapScene_MIKDLNICFCF_o *)0x0) {
    (__this->fields).onComplete = LILIJINNGNC;
    thunk_FUN_01c20e04(&__this->fields,LILIJINNGNC);
    pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar3 = Nekki_SF2_GUI_Map_MapScene_MIKDLNICFCF__GJKKOFFPNJG(__this,(MethodInfo *)0x0);
    if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
      pPVar5 = pPVar2->klass;
      uVar1._0_1_ = (pPVar5->_2).rank;
      uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar4 = pPVar5->vtable + *piVar7;
            goto LAB_036893a4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_036893a4:
                    /* WARNING: Could not recover jumptable at 0x036893bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

