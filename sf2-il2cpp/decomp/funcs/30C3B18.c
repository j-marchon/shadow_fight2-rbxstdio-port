// MDAPDLLMOMF$$NDOIJGMLKBM @ RVA 0x30C3B18

/* WARNING: Removing unreachable block (ram,0x031c409c) */

void MDAPDLLMOMF__NDOIJGMLKBM
               (MDAPDLLMOMF_o *__this,System_Xml_XmlNode_o *PCILCDBLOBA,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  System_String_o *a;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  System_String_o *item;
  MGNDHCBAPEN_string__ObscuredFloat__o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  System_Object_array *args;
  undefined8 uVar9;
  long lVar10;
  MGNDHCBAPEN_string__ObscuredFloat__array *pMVar11;
  System_String_array *pSVar12;
  ulong uVar13;
  int *piVar14;
  System_Collections_Generic_List_MGNDHCBAPEN_string__ObscuredFloat___o *__this_02;
  float CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o local_90;
  
  if ((DAT_0456629c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_ObscuredFloat>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_ObscuredFloat>_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_5058);
    FUN_01bab630(&StringLiteral_5266);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_12436);
    FUN_01bab630(&StringLiteral_11991);
    DAT_0456629c = 1;
  }
  if ((PCILCDBLOBA == (System_Xml_XmlNode_o *)0x0) ||
     (plVar4 = (long *)(*(PCILCDBLOBA->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (PCILCDBLOBA,(PCILCDBLOBA->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar10 = *plVar4;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_031c3cb4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_031c3cb4:
    uVar13 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar13 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar4;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 == 0) goto LAB_031c400c;
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar4;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_031c3d14;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_031c3d14:
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(System_Xml_XmlNode_c **)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
        System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(plVar6);
    }
    a = (System_String_o *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    pSVar7 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
    if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar7,StringLiteral_13991,(MethodInfo *)0x0);
    item = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,StringLiteral_1,(MethodInfo *)0x0);
    pSVar7 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
    if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar7,StringLiteral_11991,(MethodInfo *)0x0);
    CJNHFNHJHPE = EIABCPKDEBD__GICIEKCGOHA(pSVar8,0.0,(MethodInfo *)0x0);
    bVar3 = System_String__op_Equality(a,StringLiteral_5058,(MethodInfo *)0x0);
    if (bVar3) {
      __this_02 = (__this->fields).AKKFNCFAPDO;
      CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                (&local_90,CJNHFNHJHPE,(MethodInfo *)0x0);
      __this_00 = (MGNDHCBAPEN_string__ObscuredFloat__o *)
                  thunk_FUN_01bda818(MGNDHCBAPEN<string,_ObscuredFloat>_TypeInfo);
      MGNDHCBAPEN<object,_ObscuredFloat>___ctor
                ((MGNDHCBAPEN_T1__T2__o *)__this_00,(Il2CppObject *)item,&local_90,
                 Method_MGNDHCBAPEN<string,_ObscuredFloat>__ctor__);
      lVar10 = Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_Add__;
      if (__this_02 == (System_Collections_Generic_List_MGNDHCBAPEN_string__ObscuredFloat___o *)0x0)
      {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pMVar11 = (__this_02->fields)._items;
      (__this_02->fields)._version = (__this_02->fields)._version + 1;
      if (pMVar11 == (MGNDHCBAPEN_string__ObscuredFloat__array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (__this_02->fields)._size;
      if (uVar2 < (uint)pMVar11->max_length) {
        (__this_02->fields)._size = uVar2 + 1;
        pMVar11->m_Items[(int)uVar2] = __this_00;
        thunk_FUN_01c20e04(pMVar11->m_Items + (int)uVar2,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      bVar3 = System_String__op_Equality(a,StringLiteral_5266,(MethodInfo *)0x0);
      lVar10 = Method_System_Collections_Generic_List<string>_Add__;
      if (bVar3) {
        __this_01 = (__this->fields).NMNPMFBJBPK;
        if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar12 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pSVar12 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pSVar12->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pSVar12->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04(pSVar12->m_Items + (int)uVar2,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((a != (System_String_o *)0x0) &&
           (lVar10 = thunk_FUN_01bda71c(a,(((args->obj).klass)->_1).element_class), lVar10 == 0)) {
          uVar9 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar9,0);
        }
        if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        args->m_Items[0] = (Il2CppObject *)a;
        thunk_FUN_01c20e04(args->m_Items,a);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_12436,args,(MethodInfo *)0x0);
      }
    }
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_031c4028;
    }
  }
LAB_031c400c:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_031c4028:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

