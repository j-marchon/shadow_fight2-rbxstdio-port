// JHHFDBLANPH$$GBJGBHNMPOE @ RVA 0x316E29C

void JHHFDBLANPH__GBJGBHNMPOE(JHHFDBLANPH_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t startIndex;
  System_String_o *pSVar3;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *__this_00;
  Il2CppObject *pIVar5;
  System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *pSVar6;
  int index;
  uint uVar7;
  
  if ((DAT_04566907 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_LoadAll<Sprite>__);
    FUN_01bab630(&StringLiteral_1490);
    FUN_01bab630(&StringLiteral_20554);
    FUN_01bab630(&StringLiteral_16235);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566907 = 1;
  }
  pSVar3 = (__this->fields).MKEEEDOKPMM;
  if (pSVar3 != (System_String_o *)0x0) {
    startIndex = System_String__IndexOf(pSVar3,StringLiteral_20554,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).MKEEEDOKPMM;
    if (startIndex != -1) {
      if (pSVar3 == (System_String_o *)0x0) goto LAB_0326e490;
      pSVar3 = System_String__Substring(pSVar3,startIndex,(MethodInfo *)0x0);
    }
    if ((pSVar3 != (System_String_o *)0x0) &&
       (pSVar3 = System_String__Replace
                           (pSVar3,StringLiteral_16235,StringLiteral_1,(MethodInfo *)0x0),
       pSVar3 != (System_String_o *)0x0)) {
      pSVar3 = System_String__Replace(pSVar3,StringLiteral_1490,StringLiteral_1,(MethodInfo *)0x0);
      pSVar4 = UnityEngine_ResourcesAndBundles__LoadAll<object>
                         (pSVar3,Method_UnityEngine_ResourcesAndBundles_LoadAll<Sprite>__);
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar1 = (uint)pSVar4->max_length;
        if (0 < (int)uVar1) {
          uVar7 = 0;
          do {
            if (uVar1 <= uVar7) {
LAB_0326e494:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            __this_00 = (UnityEngine_Object_o *)pSVar4->m_Items[(int)uVar7];
            if (__this_00 == (UnityEngine_Object_o *)0x0) goto LAB_0326e490;
            pSVar3 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
            pSVar6 = (__this->fields).EJNOBBDDBDO;
            if (pSVar6 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0)
            goto LAB_0326e490;
            index = 0;
            while (index < (pSVar6->fields)._size) {
              pIVar5 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar6,index,
                                  Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Item__
                                 );
              if (pIVar5 == (Il2CppObject *)0x0) goto LAB_0326e490;
              bVar2 = System_String__op_Equality
                                ((System_String_o *)pIVar5[1].klass,pSVar3,(MethodInfo *)0x0);
              if (bVar2) {
                pSVar6 = (__this->fields).EJNOBBDDBDO;
                if (pSVar6 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0)
                goto LAB_0326e490;
                pIVar5 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar6,index,
                                    Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Item__
                                   );
                if ((uint)pSVar4->max_length <= uVar7) goto LAB_0326e494;
                if (pIVar5 == (Il2CppObject *)0x0) goto LAB_0326e490;
                pIVar5[1].monitor = pSVar4->m_Items[(int)uVar7];
                thunk_FUN_01c20e04();
              }
              pSVar6 = (__this->fields).EJNOBBDDBDO;
              index = index + 1;
              if (pSVar6 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0)
              goto LAB_0326e490;
            }
            uVar1 = (uint)pSVar4->max_length;
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar1);
        }
        return;
      }
    }
  }
LAB_0326e490:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

