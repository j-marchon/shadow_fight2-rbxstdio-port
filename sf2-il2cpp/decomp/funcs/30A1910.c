// LAMJOHEKJNJ$$.ctor @ RVA 0x30A1910

/* WARNING: Removing unreachable block (ram,0x031a1ba8) */

void LAMJOHEKJNJ___ctor(LAMJOHEKJNJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__LPEBBHNDFCG__o **ppSVar2;
  System_Xml_XmlNode_o *pSVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  System_Xml_XmlNode_o **ppSVar9;
  
  if ((DAT_04566145 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04566145 = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>__ctor__);
  ppSVar2 = &(__this->fields).DIKHJEINHID;
  *ppSVar2 = (System_Collections_Generic_Dictionary_string__LPEBBHNDFCG__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar2,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar9 = &(__this->fields)._OLIGHNIEIGK_k__BackingField;
  *ppSVar9 = AHDGNOJPPIB;
  thunk_FUN_01c20e04(ppSVar9,AHDGNOJPPIB);
  pSVar3 = *ppSVar9;
  if ((pSVar3 == (System_Xml_XmlNode_o *)0x0) ||
     (plVar4 = (long *)(*(pSVar3->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (pSVar3,(pSVar3->klass->vtable)._13_get_ChildNodes.method),
     plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_031a1a60;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x0;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_031a1a60:
    uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar7 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_031a1b58;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_031a1ac0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x1;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_031a1ac0:
    pSVar3 = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((pSVar3->klass->_2).naturalAligment < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3);
      }
    }
    LAMJOHEKJNJ__NCBMPCGHHFK(__this,pSVar3,method);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_031a1b74;
    }
  }
LAB_031a1b58:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_031a1b74:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

