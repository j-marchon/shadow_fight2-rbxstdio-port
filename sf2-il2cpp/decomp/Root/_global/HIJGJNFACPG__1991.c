// TypeDefIndex 1991
// Namespace: 
// public class HIJGJNFACPG : PNEKMHMACLG
// Fields:
//   private readonly List<LEGDPJHPEOB> KDIMDBHMBEM; // 0x60
//   public bool IBFGCMOOHOH; // 0x68

// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3291880]
// HIJGJNFACPG$$HNIHOIAMDPC @ RVA 0x3291880

void HIJGJNFACPG__HNIHOIAMDPC
               (HIJGJNFACPG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlNode_o *IIBFFEPEHPF;
  System_Xml_XmlElement_o *DBIEMFPJADD;
  MethodInfo *method_00;
  
  if ((DAT_04567329 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4577/*"Conditions"*/);
    FUN_01bab630(&StringLiteral_11457/*"RuleList"*/);
    DAT_04567329 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    IIBFFEPEHPF = (System_Xml_XmlNode_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                            (AHDGNOJPPIB,StringLiteral_4577/*"Conditions"*/,
                             (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    FPPKHNNABAD__MLJDPILPJDE(IIBFFEPEHPF,(__this->fields).KDIMDBHMBEM,(MethodInfo *)0x0);
    method_00 = (AHDGNOJPPIB->klass->vtable)._51_get_Item.method;
    DBIEMFPJADD = (System_Xml_XmlElement_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                            (AHDGNOJPPIB,StringLiteral_11457/*"RuleList"*/);
    HIJGJNFACPG__FAEKHJHILGP(__this,DBIEMFPJADD,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FAEKHJHILGP(XmlElement DBIEMFPJADD)  [RVA 0x3291924]
// HIJGJNFACPG$$FAEKHJHILGP @ RVA 0x3291924

/* WARNING: Removing unreachable block (ram,0x03391bc4) */

void HIJGJNFACPG__FAEKHJHILGP
               (HIJGJNFACPG_o *__this,System_Xml_XmlElement_o *DBIEMFPJADD,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  AJNNHGGLGIF_o *item;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  long lVar5;
  AJNNHGGLGIF_array *pAVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_0456732a & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_0456732a = 1;
  }
  if ((DBIEMFPJADD == (System_Xml_XmlElement_o *)0x0) ||
     (plVar3 = (long *)(*(DBIEMFPJADD->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (DBIEMFPJADD,(DBIEMFPJADD->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03391a1c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_03391a1c:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_03391b70;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_03391a7c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_03391a7c:
    AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
         ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
    }
    item = FCFEFEBAILK__POKFALBPBDI(AHDGNOJPPIB,(MethodInfo *)0x0);
    lVar5 = Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__;
    if (item != (AJNNHGGLGIF_o *)0x0) {
      __this_00 = (__this->fields).super.LJNCACBBIBD;
      if (__this_00 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pAVar6 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pAVar6 == (AJNNHGGLGIF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pAVar6->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pAVar6->m_Items[(int)uVar2] = item;
        thunk_FUN_01c20e04(pAVar6->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03391b8c;
    }
  }
LAB_03391b70:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_03391b8c:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== public override void RandomizeObscuredVars()  [RVA 0x3291C90]
// HIJGJNFACPG$$RandomizeObscuredVars @ RVA 0x3291C90

void HIJGJNFACPG__RandomizeObscuredVars(HIJGJNFACPG_o *__this,MethodInfo *method)

{
  System_Action_AJNNHGGLGIF__o **ppSVar1;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  System_Action_AJNNHGGLGIF__o *action;
  
  if ((DAT_0456732b & 1) == 0) {
    FUN_01bab630(&System_Action<AJNNHGGLGIF>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_ForEach__);
    FUN_01bab630(&Method_HIJGJNFACPG_<>c_NBNIOBMFCOB__);
    FUN_01bab630(&HIJGJNFACPG_<>c_TypeInfo);
    DAT_0456732b = 1;
  }
  PNEKMHMACLG__RandomizeObscuredVars((PNEKMHMACLG_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super.LJNCACBBIBD;
  if ((HIJGJNFACPG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action = HIJGJNFACPG_<>c_TypeInfo->static_fields->__9__6_0;
  if (action == (System_Action_AJNNHGGLGIF__o *)0x0) {
    if ((HIJGJNFACPG_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = (System_Action_AJNNHGGLGIF__o *)thunk_FUN_01bda818(System_Action<AJNNHGGLGIF>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &HIJGJNFACPG_<>c_TypeInfo->static_fields->__9__6_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool DGCODECJJCC(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3291DA0]
// HIJGJNFACPG$$DGCODECJJCC @ RVA 0x3291DA0

bool HIJGJNFACPG__DGCODECJJCC(HIJGJNFACPG_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_LEGDPJHPEOB__o *__this_00;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456732c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_GetEnumerator__);
    DAT_0456732c = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if (__this_00 == (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<LEGDPJHPEOB>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_MoveNext__);
    if (!bVar1) {
      iVar2 = 5;
      goto LAB_03391e60;
    }
    if ((LEGDPJHPEOB_o *)local_38.fields._current == (LEGDPJHPEOB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = LEGDPJHPEOB__DGCODECJJCC
                      ((LEGDPJHPEOB_o *)local_38.fields._current,AAJBIMFNMBB,(MethodInfo *)0x0);
  } while (bVar1);
  iVar2 = 4;
LAB_03391e60:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__);
  return iVar2 != 4;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3291F10]
// HIJGJNFACPG$$.ctor @ RVA 0x3291F10

void HIJGJNFACPG___ctor(HIJGJNFACPG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Collections_Generic_List_LEGDPJHPEOB__o *__this_00;
  System_Collections_Generic_List_LEGDPJHPEOB__o **ppSVar1;
  
  if ((DAT_0456732d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<LEGDPJHPEOB>_TypeInfo);
    DAT_0456732d = 1;
  }
  __this_00 = (System_Collections_Generic_List_LEGDPJHPEOB__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<LEGDPJHPEOB>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<LEGDPJHPEOB>__ctor__);
  ppSVar1 = &(__this->fields).KDIMDBHMBEM;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  PNEKMHMACLG___ctor((PNEKMHMACLG_o *)__this,0x29,AHDGNOJPPIB,(MethodInfo *)0x0);
  return;
}

