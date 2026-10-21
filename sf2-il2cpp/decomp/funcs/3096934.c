// Sf2.Timers$$Update @ RVA 0x3096934

void Sf2_Timers__Update(Sf2_Timers_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar5;
  Il2CppClass *pIVar6;
  ulong uVar7;
  int32_t *piVar8;
  int index;
  float fVar9;
  undefined4 extraout_var;
  
  if ((DAT_045660dd & 1) == 0) {
    FUN_01bab630(&HDNONCJLIHI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HDNONCJLIHI>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HDNONCJLIHI>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HDNONCJLIHI>_get_Item__);
    DAT_045660dd = 1;
  }
  pSVar3 = (System_Collections_Generic_List_object__o *)(__this->fields).DIKHJEINHID;
  if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
    index = (pSVar3->fields)._size + -1;
    if (index < 0) {
      return;
    }
    do {
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         (pSVar3,index,
                          Method_System_Collections_Generic_List<HDNONCJLIHI>_get_Item__);
      if (pIVar4 == (Il2CppObject *)0x0) break;
      pIVar6 = pIVar4->klass;
      uVar1._0_1_ = (pIVar6->_2).rank;
      uVar1._1_1_ = (pIVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar1;
      if (uVar7 != 0) {
        piVar8 = &((pIVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)HDNONCJLIHI_TypeInfo) {
            pVVar5 = pIVar6->vtable + (*piVar8 + 1);
            goto LAB_03196a20;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,HDNONCJLIHI_TypeInfo,1);
LAB_03196a20:
      uVar7 = (*pVVar5->methodPtr)(pIVar4,pVVar5->method);
      pSVar3 = (System_Collections_Generic_List_object__o *)(__this->fields).DIKHJEINHID;
      if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) break;
      if ((uVar7 & 1) == 0) {
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           (pSVar3,index,
                            Method_System_Collections_Generic_List<HDNONCJLIHI>_get_Item__);
        fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        if (pIVar4 == (Il2CppObject *)0x0) break;
        pIVar6 = pIVar4->klass;
        uVar2._0_1_ = (pIVar6->_2).rank;
        uVar2._1_1_ = (pIVar6->_2).minimumAlignment;
        uVar7 = (ulong)uVar2;
        if (uVar7 != 0) {
          piVar8 = &((pIVar6->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                (Il2CppClass *)HDNONCJLIHI_TypeInfo) {
              pVVar5 = pIVar6->vtable + *piVar8;
              goto LAB_03196abc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,HDNONCJLIHI_TypeInfo,0);
LAB_03196abc:
        (*pVVar5->methodPtr)(CONCAT44(extraout_var,fVar9),pIVar4,pVVar5->method);
      }
      else {
        System_Collections_Generic_List<object>__RemoveAt
                  (pSVar3,index,Method_System_Collections_Generic_List<HDNONCJLIHI>_RemoveAt__);
      }
      index = index + -1;
      if (index < 0) {
        return;
      }
      pSVar3 = (System_Collections_Generic_List_object__o *)(__this->fields).DIKHJEINHID;
    } while (pSVar3 != (System_Collections_Generic_List_object__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

