// FEKEAPCCOOB$$KNPIBDBFFIA @ RVA 0x3513B90

void FEKEAPCCOOB__KNPIBDBFFIA(FEKEAPCCOOB_o *__this,int32_t CKMDPHJOKAF,MethodInfo *method)

{
  int DPJIDNBJIBG;
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  UnityEngine_UI_Button_o *LGHOMHOPNEP;
  TabView_o *x;
  UnityEngine_UI_Button_o *LGHOMHOPNEP_00;
  TabView_o *exists;
  VirtualInvokeData *pVVar7;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_String_o *value;
  undefined8 *puVar8;
  undefined8 uVar9;
  System_Collections_Generic_List_KeyValuePair_Button__TabView___o *pSVar10;
  JEFOMACMAAD_c *pJVar11;
  void **ppvVar12;
  ulong uVar13;
  int32_t *piVar14;
  int32_t iVar15;
  JEFOMACMAAD_o *pJVar16;
  
  if ((DAT_04568911 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>_get_Item__);
    FUN_01bab630(&JEFOMACMAAD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<Button,_TabView>>_get_Count__)
    ;
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12791);
    DAT_04568911 = 1;
  }
  if (-1 < CKMDPHJOKAF) {
    pSVar10 = (__this->fields).IJLEELMHJNN;
    if (pSVar10 == (System_Collections_Generic_List_KeyValuePair_Button__TabView___o *)0x0) {
LAB_03613fdc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((CKMDPHJOKAF <= (pSVar10->fields)._size) &&
       (DPJIDNBJIBG = (__this->fields).GEKOMLGOJOP, DPJIDNBJIBG != CKMDPHJOKAF)) {
      LGHOMHOPNEP = FEKEAPCCOOB__MJEMLECEAHI(__this,DPJIDNBJIBG,method);
      x = FEKEAPCCOOB__IDLJKBJEEHF(__this,(__this->fields).GEKOMLGOJOP,method);
      LGHOMHOPNEP_00 = FEKEAPCCOOB__MJEMLECEAHI(__this,CKMDPHJOKAF,method);
      exists = FEKEAPCCOOB__IDLJKBJEEHF(__this,CKMDPHJOKAF,method);
      pJVar16 = (__this->fields).FIPOAPJHEPL;
      if (pJVar16 != (JEFOMACMAAD_o *)0x0) {
        pJVar11 = pJVar16->klass;
        uVar1 = (__this->fields).GEKOMLGOJOP;
        uVar2._0_1_ = (pJVar11->_2).rank;
        uVar2._1_1_ = (pJVar11->_2).minimumAlignment;
        uVar13 = (ulong)uVar2;
        if (uVar13 != 0) {
          piVar14 = &((pJVar11->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                (Il2CppClass *)JEFOMACMAAD_TypeInfo) {
              pVVar7 = pJVar11->vtable + (*piVar14 + 1);
              goto LAB_03613d0c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        pVVar7 = (VirtualInvokeData *)FUN_01b81914(pJVar16,JEFOMACMAAD_TypeInfo,1);
LAB_03613d0c:
        (*pVVar7->methodPtr)
                  (pJVar16,LGHOMHOPNEP,x,(ulong)uVar1,LGHOMHOPNEP_00,exists,(ulong)(uint)CKMDPHJOKAF
                   ,pVVar7->method);
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar6 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
      if (bVar6) {
        uVar1 = (__this->fields).GEKOMLGOJOP;
        (__this->fields).GEKOMLGOJOP = CKMDPHJOKAF;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)LGHOMHOPNEP,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar6) {
          LJLLAKHOFFF__JAEOMHIAHJB(LGHOMHOPNEP,0,true,(MethodInfo *)0x0);
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          if (x == (TabView_o *)0x0) goto LAB_03613fdc;
          (*(x->klass->vtable)._18_Hide.methodPtr)(x,(x->klass->vtable)._18_Hide.method);
          pJVar16 = (__this->fields).FIPOAPJHEPL;
          if (pJVar16 != (JEFOMACMAAD_o *)0x0) {
            pJVar11 = pJVar16->klass;
            uVar3._0_1_ = (pJVar11->_2).rank;
            uVar3._1_1_ = (pJVar11->_2).minimumAlignment;
            uVar13 = (ulong)uVar3;
            if (uVar13 != 0) {
              piVar14 = &((pJVar11->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                    (Il2CppClass *)JEFOMACMAAD_TypeInfo) {
                  pVVar7 = pJVar11->vtable + (*piVar14 + 2);
                  goto LAB_03613eac;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            pVVar7 = (VirtualInvokeData *)FUN_01b81914(pJVar16,JEFOMACMAAD_TypeInfo,2);
LAB_03613eac:
            (*pVVar7->methodPtr)(pJVar16,(ulong)uVar1,pVVar7->method);
          }
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)LGHOMHOPNEP_00,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar6) {
          LJLLAKHOFFF__JAEOMHIAHJB(LGHOMHOPNEP_00,3,true,(MethodInfo *)0x0);
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)exists,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar6) {
          if (exists == (TabView_o *)0x0) goto LAB_03613fdc;
          (*(exists->klass->vtable)._17_Show.methodPtr)
                    (exists,(exists->klass->vtable)._17_Show.method);
        }
        pJVar16 = (__this->fields).FIPOAPJHEPL;
        if (pJVar16 == (JEFOMACMAAD_o *)0x0) {
          return;
        }
        pJVar11 = pJVar16->klass;
        iVar15 = (__this->fields).GEKOMLGOJOP;
        uVar5._0_1_ = (pJVar11->_2).rank;
        uVar5._1_1_ = (pJVar11->_2).minimumAlignment;
        uVar13 = (ulong)uVar5;
        if (uVar13 != 0) {
          piVar14 = &((pJVar11->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                (Il2CppClass *)JEFOMACMAAD_TypeInfo) {
              ppvVar12 = &(pJVar11->_1).image + (long)*piVar14 * 2;
LAB_03613fb4:
              puVar8 = ppvVar12 + 0x27;
              goto LAB_03613fb8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        uVar9 = 0;
      }
      else {
        __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                    (__this->fields).DPOMIJALCDD;
        if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)
        goto LAB_03613fdc;
        value = (System_String_o *)
                System_Collections_Generic_Dictionary<int,_object>__get_Item
                          (__this_00,CKMDPHJOKAF,
                           Method_System_Collections_Generic_Dictionary<int,_string>_get_Item__);
        bVar6 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if (bVar6) {
          return;
        }
        pJVar16 = (__this->fields).FIPOAPJHEPL;
        if (pJVar16 == (JEFOMACMAAD_o *)0x0) {
          return;
        }
        pJVar11 = pJVar16->klass;
        iVar15 = (__this->fields).GEKOMLGOJOP;
        uVar4._0_1_ = (pJVar11->_2).rank;
        uVar4._1_1_ = (pJVar11->_2).minimumAlignment;
        uVar13 = (ulong)uVar4;
        if (uVar13 != 0) {
          piVar14 = &((pJVar11->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                (Il2CppClass *)JEFOMACMAAD_TypeInfo) {
              ppvVar12 = &(pJVar11->_1).image + (long)(*piVar14 + 3) * 2;
              goto LAB_03613fb4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        uVar9 = 3;
      }
      puVar8 = (undefined8 *)FUN_01b81914(pJVar16,JEFOMACMAAD_TypeInfo,uVar9);
LAB_03613fb8:
                    /* WARNING: Could not recover jumptable at 0x03613fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar8)(pJVar16,iVar15,puVar8[1]);
      return;
    }
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_12791,(MethodInfo *)0x0);
  return;
}

