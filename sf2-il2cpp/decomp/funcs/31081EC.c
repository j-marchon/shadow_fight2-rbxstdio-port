// OPNFCOGALLI$$PHCDAOEAKHE @ RVA 0x31081EC

void OPNFCOGALLI__PHCDAOEAKHE(OPNFCOGALLI_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  GBJGJEGPHKD_o *pGVar2;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  System_Object_array *args;
  long lVar3;
  Il2CppObject *pIVar4;
  IEFEBEDLHNN_o *__this_01;
  undefined8 uVar5;
  ECENNHNBAME_o *pEVar6;
  int index;
  System_String_o *pSVar7;
  int32_t local_28;
  int32_t local_24;
  
  if ((DAT_0456651b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_7360);
    DAT_0456651b = 1;
  }
  pGVar2 = (__this->fields).KOHECBJAFKG;
  if (pGVar2 != (GBJGJEGPHKD_o *)0x0) {
    GBJGJEGPHKD__GLMFAHPICHD(pGVar2,(MethodInfo *)0x0);
    pGVar2 = (__this->fields).KOHECBJAFKG;
    if (pGVar2 != (GBJGJEGPHKD_o *)0x0) {
      __this_00 = GBJGJEGPHKD__HMAAHELNECD(pGVar2,(MethodInfo *)0x0);
      pEVar6 = (__this->fields).NDBPNFLAKDL;
      if (pEVar6 != (ECENNHNBAME_o *)0x0) {
        iVar1 = ECENNHNBAME__DINOEMMMNBJ(pEVar6,(MethodInfo *)0x0);
        if (__this_00 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
          if (iVar1 <= (__this_00->fields)._size) {
LAB_032083cc:
            if (0 < iVar1) {
              index = 0;
              do {
                __this_01 = (IEFEBEDLHNN_o *)
                            System_Collections_Generic_List<object>__get_Item
                                      ((System_Collections_Generic_List_object__o *)__this_00,index,
                                       Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__
                                      );
                if (__this_01 == (IEFEBEDLHNN_o *)0x0) goto LAB_03208418;
                IEFEBEDLHNN__JKBONAAMFIL(__this_01,(MethodInfo *)0x0);
                index = index + 1;
              } while (iVar1 != index);
            }
            return;
          }
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
          pEVar6 = (__this->fields).NDBPNFLAKDL;
          if ((pEVar6 != (ECENNHNBAME_o *)0x0) && (args != (System_Object_array *)0x0)) {
            pSVar7 = (pEVar6->fields).JIJLBFGKNJK;
            if ((pSVar7 != (System_String_o *)0x0) &&
               (lVar3 = thunk_FUN_01bda71c(pSVar7,(((args->obj).klass)->_1).element_class),
               lVar3 == 0)) {
LAB_03208420:
              uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar5,0);
            }
            if ((int)args->max_length != 0) {
              args->m_Items[0] = (Il2CppObject *)pSVar7;
              thunk_FUN_01c20e04(args->m_Items,pSVar7);
              local_24 = iVar1;
              pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
              if ((pIVar4 != (Il2CppObject *)0x0) &&
                 (lVar3 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class),
                 lVar3 == 0)) goto LAB_03208420;
              if (1 < (uint)args->max_length) {
                args->m_Items[1] = pIVar4;
                thunk_FUN_01c20e04(args->m_Items + 1,pIVar4);
                local_28 = (__this_00->fields)._size;
                pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_28);
                if ((pIVar4 != (Il2CppObject *)0x0) &&
                   (lVar3 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class),
                   lVar3 == 0)) goto LAB_03208420;
                if (2 < (uint)args->max_length) {
                  args->m_Items[2] = pIVar4;
                  thunk_FUN_01c20e04(args->m_Items + 2,pIVar4);
                  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  UnityEngine_Debug__LogErrorFormat(StringLiteral_7360,args,(MethodInfo *)0x0);
                  iVar1 = (__this_00->fields)._size;
                  goto LAB_032083cc;
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
        }
      }
    }
  }
LAB_03208418:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

