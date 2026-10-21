// EINKKMIHCHI$$KILLFKNHDAO @ RVA 0x34C6640

void EINKKMIHCHI__KILLFKNHDAO
               (EINKKMIHCHI_o *__this,UnityEngine_SocialPlatforms_IAchievement_array *GHAAKPDHIJJ,
               MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  Il2CppMethodPointer *ppIVar6;
  Il2CppObject *pIVar7;
  System_Object_array *IDLMDMNFPHK;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  UnityEngine_SocialPlatforms_IAchievement_c *pUVar11;
  System_Collections_Generic_HashSet_string__o *pSVar12;
  System_Action_IAchievement____o *pSVar13;
  int32_t *piVar14;
  UnityEngine_SocialPlatforms_IAchievement_o *pUVar15;
  ulong uVar16;
  int32_t local_48;
  int32_t local_44;
  
  if ((DAT_0456863d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_get_Count__);
    FUN_01bab630(&UnityEngine_SocialPlatforms_IAchievement_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_14517);
    FUN_01bab630(&StringLiteral_3647);
    DAT_0456863d = 1;
  }
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,StringLiteral_3647,(MethodInfo *)0x0);
  pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).LKNFEOLNJKH;
  if (pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Clear
              (pSVar5,Method_System_Collections_Generic_HashSet<string>_Clear__);
    pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).FEKDPAPKONP;
    if (pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet<object>__Clear
                (pSVar5,Method_System_Collections_Generic_HashSet<string>_Clear__);
      if ((GHAAKPDHIJJ != (UnityEngine_SocialPlatforms_IAchievement_array *)0x0) &&
         (0 < (int)GHAAKPDHIJJ->max_length)) {
        uVar16 = 0;
        uVar10 = GHAAKPDHIJJ->max_length & 0xffffffff;
        do {
          if (uVar10 <= uVar16) goto LAB_035c69ec;
          pUVar15 = GHAAKPDHIJJ->m_Items[uVar16];
          if (pUVar15 != (UnityEngine_SocialPlatforms_IAchievement_o *)0x0) {
            pUVar11 = pUVar15->klass;
            pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).LKNFEOLNJKH;
            uVar2._0_1_ = (pUVar11->_2).rank;
            uVar2._1_1_ = (pUVar11->_2).minimumAlignment;
            uVar10 = (ulong)uVar2;
            if (uVar10 != 0) {
              piVar14 = &((pUVar11->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                    (Il2CppClass *)UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                  ppIVar6 = &pUVar11->vtable[*piVar14 + 1].methodPtr;
                  goto LAB_035c67ac;
                }
                uVar10 = uVar10 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar10 != 0);
            }
            ppIVar6 = (Il2CppMethodPointer *)
                      FUN_01b81914(pUVar15,UnityEngine_SocialPlatforms_IAchievement_TypeInfo,1);
LAB_035c67ac:
            pIVar7 = (Il2CppObject *)(**ppIVar6)(pUVar15,(MethodInfo *)ppIVar6[1]);
            if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_035c69e8;
            System_Collections_Generic_HashSet<object>__Add
                      (pSVar5,pIVar7,Method_System_Collections_Generic_HashSet<string>_Add__);
            pUVar11 = pUVar15->klass;
            uVar3._0_1_ = (pUVar11->_2).rank;
            uVar3._1_1_ = (pUVar11->_2).minimumAlignment;
            uVar10 = (ulong)uVar3;
            if (uVar10 != 0) {
              piVar14 = &((pUVar11->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                    (Il2CppClass *)UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                  ppIVar6 = &pUVar11->vtable[*piVar14 + 4].methodPtr;
                  goto LAB_035c681c;
                }
                uVar10 = uVar10 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar10 != 0);
            }
            ppIVar6 = (Il2CppMethodPointer *)
                      FUN_01b81914(pUVar15,UnityEngine_SocialPlatforms_IAchievement_TypeInfo,4);
LAB_035c681c:
            uVar10 = (**ppIVar6)(pUVar15,(MethodInfo *)ppIVar6[1]);
            if ((uVar10 & 1) != 0) {
              pUVar11 = pUVar15->klass;
              pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).FEKDPAPKONP;
              uVar4._0_1_ = (pUVar11->_2).rank;
              uVar4._1_1_ = (pUVar11->_2).minimumAlignment;
              uVar10 = (ulong)uVar4;
              if (uVar10 != 0) {
                piVar14 = &((pUVar11->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                      (Il2CppClass *)UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                    ppIVar6 = &pUVar11->vtable[*piVar14 + 1].methodPtr;
                    goto LAB_035c6880;
                  }
                  uVar10 = uVar10 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar10 != 0);
              }
              ppIVar6 = (Il2CppMethodPointer *)
                        FUN_01b81914(pUVar15,UnityEngine_SocialPlatforms_IAchievement_TypeInfo,1);
LAB_035c6880:
              pIVar7 = (Il2CppObject *)(**ppIVar6)(pUVar15,(MethodInfo *)ppIVar6[1]);
              if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_035c69e8;
              System_Collections_Generic_HashSet<object>__Add
                        (pSVar5,pIVar7,Method_System_Collections_Generic_HashSet<string>_Add__);
            }
          }
          uVar1 = (uint)GHAAKPDHIJJ->max_length;
          uVar10 = (ulong)uVar1;
          uVar16 = uVar16 + 1;
        } while ((long)uVar16 < (long)(int)uVar1);
      }
      IDLMDMNFPHK = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
      pSVar12 = (__this->fields).FEKDPAPKONP;
      if (pSVar12 != (System_Collections_Generic_HashSet_string__o *)0x0) {
        local_44 = (pSVar12->fields)._count;
        pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
        if (IDLMDMNFPHK != (System_Object_array *)0x0) {
          if ((pIVar7 != (Il2CppObject *)0x0) &&
             (lVar8 = thunk_FUN_01bda71c(pIVar7,(((IDLMDMNFPHK->obj).klass)->_1).element_class),
             lVar8 == 0)) {
LAB_035c69f0:
            uVar9 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar9,0);
          }
          if ((int)IDLMDMNFPHK->max_length == 0) {
LAB_035c69ec:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          IDLMDMNFPHK->m_Items[0] = pIVar7;
          thunk_FUN_01c20e04(IDLMDMNFPHK->m_Items,pIVar7);
          pSVar12 = (__this->fields).LKNFEOLNJKH;
          if (pSVar12 != (System_Collections_Generic_HashSet_string__o *)0x0) {
            local_48 = (pSVar12->fields)._count;
            pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_48);
            if ((pIVar7 != (Il2CppObject *)0x0) &&
               (lVar8 = thunk_FUN_01bda71c(pIVar7,(((IDLMDMNFPHK->obj).klass)->_1).element_class),
               lVar8 == 0)) goto LAB_035c69f0;
            if ((uint)IDLMDMNFPHK->max_length < 2) goto LAB_035c69ec;
            IDLMDMNFPHK->m_Items[1] = pIVar7;
            thunk_FUN_01c20e04(IDLMDMNFPHK->m_Items + 1,pIVar7);
            NHJCFGACFDF__JCPIAHAKBIA
                      ((NHJCFGACFDF_o *)__this,StringLiteral_14517,IDLMDMNFPHK,(MethodInfo *)0x0);
            if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar13 = NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
            if (pSVar13 != (System_Action_IAchievement____o *)0x0) {
              (*(code *)(pSVar13->fields).super.super.invoke_impl)
                        ((pSVar13->fields).super.super.method_code,GHAAKPDHIJJ,
                         (pSVar13->fields).super.super.method);
              return;
            }
          }
        }
      }
    }
  }
LAB_035c69e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

