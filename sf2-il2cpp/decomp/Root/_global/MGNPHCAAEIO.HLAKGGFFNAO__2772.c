// TypeDefIndex 2772
// Namespace: 
// public class MGNPHCAAEIO.HLAKGGFFNAO
// Fields:
//   private List<HBNENINHPGF> DIELINNGEBJ; // 0x10

// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x340FAE4]
// MGNPHCAAEIO.HLAKGGFFNAO$$HNIHOIAMDPC @ RVA 0x340FAE4

/* WARNING: Removing unreachable block (ram,0x0350fdfc) */

void MGNPHCAAEIO_HLAKGGFFNAO__HNIHOIAMDPC
               (MGNPHCAAEIO_HLAKGGFFNAO_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  HBNENINHPGF_o *__this_00;
  System_Collections_Generic_List_HBNENINHPGF__o *pSVar5;
  long lVar6;
  HBNENINHPGF_array *pHVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_04568071 & 1) == 0) {
    FUN_01bab630(&HBNENINHPGF_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HBNENINHPGF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HBNENINHPGF>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04568071 = 1;
  }
  pSVar5 = (__this->fields).DIELINNGEBJ;
  if (pSVar5 != (System_Collections_Generic_List_HBNENINHPGF__o *)0x0) {
    length = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
       (plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method),
       plVar3 != (long *)0x0)) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0350fc30;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_0350fc30:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
          if (plVar3 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 == 0) goto LAB_0350fd9c;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_0350fd84;
        }
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_0350fc90;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_0350fc90:
        AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        __this_00 = (HBNENINHPGF_o *)thunk_FUN_01bda818(HBNENINHPGF_TypeInfo);
        if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
             ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(AHDGNOJPPIB_00);
          }
        }
        HBNENINHPGF___ctor(__this_00,AHDGNOJPPIB_00,(MethodInfo *)0x0);
        lVar6 = Method_System_Collections_Generic_List<HBNENINHPGF>_Add__;
        pSVar5 = (__this->fields).DIELINNGEBJ;
        if (pSVar5 == (System_Collections_Generic_List_HBNENINHPGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pHVar7 = (pSVar5->fields)._items;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (pHVar7 == (HBNENINHPGF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar5->fields)._size;
        if (uVar2 < (uint)pHVar7->max_length) {
          (pSVar5->fields)._size = uVar2 + 1;
          pHVar7->m_Items[(int)uVar2] = __this_00;
          thunk_FUN_01c20e04(pHVar7->m_Items + (int)uVar2,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0350fd84:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0350fdb8;
    }
  }
LAB_0350fd9c:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_0350fdb8:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== public List<HBNENINHPGF> ECKHIBFGCKG()  [RVA 0x340FEC8]
// MGNPHCAAEIO.HLAKGGFFNAO$$ECKHIBFGCKG @ RVA 0x340FEC8

System_Collections_Generic_List_HBNENINHPGF__o *
MGNPHCAAEIO_HLAKGGFFNAO__ECKHIBFGCKG(MGNPHCAAEIO_HLAKGGFFNAO_o *__this,MethodInfo *method)

{
  return (__this->fields).DIELINNGEBJ;
}


// ===== public void .ctor()  [RVA 0x33FDC90]
// MGNPHCAAEIO.HLAKGGFFNAO$$.ctor @ RVA 0x33FDC90

void MGNPHCAAEIO_HLAKGGFFNAO___ctor(MGNPHCAAEIO_HLAKGGFFNAO_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HBNENINHPGF__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568072 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HBNENINHPGF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HBNENINHPGF>_TypeInfo);
    DAT_04568072 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_HBNENINHPGF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HBNENINHPGF>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HBNENINHPGF>__ctor__);
  (__this->fields).DIELINNGEBJ = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void EHJFPEMNGIN(HBNENINHPGF AOCKMIDKNHI)  [RVA 0x340FED0]
// MGNPHCAAEIO.HLAKGGFFNAO$$EHJFPEMNGIN @ RVA 0x340FED0

void MGNPHCAAEIO_HLAKGGFFNAO__EHJFPEMNGIN
               (MGNPHCAAEIO_HLAKGGFFNAO_o *__this,HBNENINHPGF_o *AOCKMIDKNHI,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_HBNENINHPGF__o *__this_00;
  HBNENINHPGF_array *pHVar3;
  
  if ((DAT_04568073 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HBNENINHPGF>_Add__);
    DAT_04568073 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<HBNENINHPGF>_Add__;
  __this_00 = (__this->fields).DIELINNGEBJ;
  if (__this_00 != (System_Collections_Generic_List_HBNENINHPGF__o *)0x0) {
    pHVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar3 != (HBNENINHPGF_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pHVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pHVar3->m_Items[(int)uVar1] = AOCKMIDKNHI;
        thunk_FUN_01c20e04(pHVar3->m_Items + (int)uVar1,AOCKMIDKNHI);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)AOCKMIDKNHI,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HBNENINHPGF BHJOLIJDBLO(string KGLJICLJHEL)  [RVA 0x3403700]
// MGNPHCAAEIO.HLAKGGFFNAO$$BHJOLIJDBLO @ RVA 0x3403700

HBNENINHPGF_o *
MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO
          (MGNPHCAAEIO_HLAKGGFFNAO_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HBNENINHPGF__o *__this_00;
  HBNENINHPGF_o *pHVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568074 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HBNENINHPGF>_GetEnumerator__);
    DAT_04568074 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).DIELINNGEBJ;
  if (__this_00 == (System_Collections_Generic_List_HBNENINHPGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HBNENINHPGF>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_MoveNext__);
    pHVar2 = (HBNENINHPGF_o *)local_48.fields._current;
    if (!bVar1) {
      pHVar2 = (HBNENINHPGF_o *)0x0;
      break;
    }
    if ((HBNENINHPGF_o *)local_48.fields._current == (HBNENINHPGF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((HBNENINHPGF_Fields *)((long)local_48.fields._current + 0x10))->
                       _COIPKAKHDFP_k__BackingField,KGLJICLJHEL,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_Dispose__);
  return pHVar2;
}


// ===== public void EFOIDADNDPJ(XmlNode AHDGNOJPPIB)  [RVA 0x340FF7C]
// MGNPHCAAEIO.HLAKGGFFNAO$$EFOIDADNDPJ @ RVA 0x340FF7C

void MGNPHCAAEIO_HLAKGGFFNAO__EFOIDADNDPJ
               (MGNPHCAAEIO_HLAKGGFFNAO_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  Il2CppObject *__this_00;
  bool bVar4;
  HBNENINHPGF_o *__this_01;
  System_Collections_Generic_List_HBNENINHPGF__o *pSVar5;
  HBNENINHPGF_array *pHVar6;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04568075 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_get_Current__);
    FUN_01bab630(&HBNENINHPGF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HBNENINHPGF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HBNENINHPGF>_GetEnumerator__);
    DAT_04568075 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_01 = (HBNENINHPGF_o *)thunk_FUN_01bda818(HBNENINHPGF_TypeInfo);
  HBNENINHPGF___ctor(__this_01,AHDGNOJPPIB,(MethodInfo *)0x0);
  pSVar5 = (__this->fields).DIELINNGEBJ;
  if (pSVar5 != (System_Collections_Generic_List_HBNENINHPGF__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)pSVar5,
               Method_System_Collections_Generic_List<HBNENINHPGF>_GetEnumerator__);
    local_60.fields._current = local_78.fields._current;
    bVar2 = true;
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_MoveNext__
                             ), __this_00 = local_60.fields._current, bVar4) {
      if ((HBNENINHPGF_o *)local_60.fields._current == (HBNENINHPGF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (__this_01 == (HBNENINHPGF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar4 = System_String__op_Equality
                        (((HBNENINHPGF_Fields *)((long)local_60.fields._current + 0x10))->
                         _COIPKAKHDFP_k__BackingField,
                         (__this_01->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
      if (bVar4) {
        HBNENINHPGF__FMOHGOEPAPH((HBNENINHPGF_o *)__this_00,__this_01,(MethodInfo *)0x0);
        bVar2 = false;
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_Dispose__);
    lVar3 = Method_System_Collections_Generic_List<HBNENINHPGF>_Add__;
    if (!bVar2) {
      return;
    }
    pSVar5 = (__this->fields).DIELINNGEBJ;
    if (pSVar5 != (System_Collections_Generic_List_HBNENINHPGF__o *)0x0) {
      pHVar6 = (pSVar5->fields)._items;
      (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
      if (pHVar6 != (HBNENINHPGF_array *)0x0) {
        uVar1 = (pSVar5->fields)._size;
        if (uVar1 < (uint)pHVar6->max_length) {
          (pSVar5->fields)._size = uVar1 + 1;
          pHVar6->m_Items[(int)uVar1] = __this_01;
          thunk_FUN_01c20e04(pHVar6->m_Items + (int)uVar1,__this_01);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_01,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

