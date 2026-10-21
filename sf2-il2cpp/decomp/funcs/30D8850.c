// Nekki.SF2.GUI.TableView$$JIOHAMAMGPF @ RVA 0x30D8850

void Nekki_SF2_GUI_TableView__JIOHAMAMGPF
               (Nekki_SF2_GUI_TableView_o *__this,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  KMAKOOHEKNB_o *__this_00;
  VirtualInvokeData *pVVar3;
  MethodInfo *method_00;
  MLIIECFHJAM_c *pMVar4;
  ulong uVar5;
  int32_t *piVar6;
  Nekki_SF2_GUI_TableViewCell_o *pNVar7;
  MLIIECFHJAM_o *pMVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_04566340 & 1) == 0) {
    FUN_01bab630(&MLIIECFHJAM_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566340 = 1;
  }
  if ((__this->fields).PIHMBLAFPBJ == false) {
    pNVar7 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    method_00 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar2) {
      pNVar7 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
      if (pNVar7 == (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
LAB_031d89a8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((pNVar7->fields).FIMCNHGPCNA == JDEFJPHCNMM) {
        fVar11 = (__this->fields).GMCDBHFHFGF;
        fVar9 = Nekki_SF2_GUI_TableView__PositionForRow(__this,JDEFJPHCNMM,method_00);
        __this_00 = (__this->fields).HCLHHHKCABP;
        if (__this_00 == (KMAKOOHEKNB_o *)0x0) goto LAB_031d89a8;
        fVar10 = KMAKOOHEKNB__HGJGLBLDDHF(__this_00,JDEFJPHCNMM,(MethodInfo *)0x0);
        if ((ABS(fVar11 - fVar9) <= fVar10 * 0.0625) &&
           (pMVar8 = (__this->fields).CFMPOFMLMKK, pMVar8 != (MLIIECFHJAM_o *)0x0)) {
          pMVar4 = pMVar8->klass;
          uVar1._0_1_ = (pMVar4->_2).rank;
          uVar1._1_1_ = (pMVar4->_2).minimumAlignment;
          uVar5 = (ulong)uVar1;
          if (uVar5 != 0) {
            piVar6 = &((pMVar4->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
                  (Il2CppClass *)MLIIECFHJAM_TypeInfo) {
                pVVar3 = pMVar4->vtable + (*piVar6 + 2);
                goto LAB_031d8988;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          pVVar3 = (VirtualInvokeData *)FUN_01b81914(pMVar8,MLIIECFHJAM_TypeInfo,2);
LAB_031d8988:
                    /* WARNING: Could not recover jumptable at 0x031d89a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar3->methodPtr)(pMVar8,__this,(ulong)(uint)JDEFJPHCNMM,pVVar3->method);
          return;
        }
      }
    }
  }
  return;
}

