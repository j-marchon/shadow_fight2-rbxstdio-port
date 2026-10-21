// TypeDefIndex 2152
// Namespace: 
// public class AGCDKMOOJGI : AJNNHGGLGIF
// Fields:
//   public const string AFELPFGMCOL = "EachFight";
//   public const string FDEBCDPHPHL = "EachRound";
//   private AJNNHGGLGIF EOKBEEIMNAF; // 0x58
//   private List<AJNNHGGLGIF> LJNCACBBIBD; // 0x60
//   private List<AJNNHGGLGIF> LGIIIFNKHHO; // 0x68
//   private List<AJNNHGGLGIF> IDNEPDGAJCK; // 0x70
//   private bool DEMMDPCLLKF; // 0x78
//   private AGCDKMOOJGI.GNLLDBAEBDI EIMDJHJAHKK; // 0x7C

// ===== public AGCDKMOOJGI.GNLLDBAEBDI PMNEILHPLOE()  [RVA 0x32D630C]
// AGCDKMOOJGI$$PMNEILHPLOE @ RVA 0x32D630C

int32_t AGCDKMOOJGI__PMNEILHPLOE(AGCDKMOOJGI_o *__this,MethodInfo *method)

{
  return (__this->fields).EIMDJHJAHKK;
}


// ===== public bool HLJABMJMGFI(int ODIAFMNGOLA)  [RVA 0x32D6314]
// AGCDKMOOJGI$$HLJABMJMGFI @ RVA 0x32D6314

bool AGCDKMOOJGI__HLJABMJMGFI(AGCDKMOOJGI_o *__this,int32_t ODIAFMNGOLA,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  
  if ((DAT_04567590 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_11008/*"RandomRule::checkReset ERROR - invalid Refresh value"*/);
    DAT_04567590 = 1;
  }
  iVar1 = (__this->fields).EIMDJHJAHKK;
  if (iVar1 == 2) {
    bVar2 = true;
  }
  else if (iVar1 == 1) {
    bVar2 = ODIAFMNGOLA == 1;
  }
  else {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_11008/*"RandomRule::checkReset ERROR - invalid Refresh value"*/,(MethodInfo *)0x0);
    bVar2 = false;
  }
  return bVar2;
}


// ===== public void EKFNBHMNHFA()  [RVA 0x32D63B4]
// AGCDKMOOJGI$$EKFNBHMNHFA @ RVA 0x32D63B4

void AGCDKMOOJGI__EKFNBHMNHFA(AGCDKMOOJGI_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_AJNNHGGLGIF__o *pSVar2;
  AJNNHGGLGIF_o **ppAVar3;
  
  if ((DAT_04567591 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_Clear__);
    DAT_04567591 = 1;
  }
  pSVar2 = (__this->fields).LGIIIFNKHHO;
  if (pSVar2 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
      pSVar2 = (__this->fields).LGIIIFNKHHO;
      if (pSVar2 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) goto LAB_033d6478;
    }
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)pSVar2,
               (System_Collections_Generic_IEnumerable_T__o *)(__this->fields).LJNCACBBIBD,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>_AddRange__);
    pSVar2 = (__this->fields).IDNEPDGAJCK;
    if (pSVar2 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      ppAVar3 = &(__this->fields).EOKBEEIMNAF;
      *ppAVar3 = (AJNNHGGLGIF_o *)0x0;
      thunk_FUN_01c20e04(ppAVar3,0);
      return;
    }
  }
LAB_033d6478:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x32D647C]
// AGCDKMOOJGI$$.ctor @ RVA 0x32D647C

void AGCDKMOOJGI___ctor(AGCDKMOOJGI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Collections_Generic_List_AJNNHGGLGIF__o *pSVar1;
  System_Collections_Generic_List_AJNNHGGLGIF__o **ppSVar2;
  AJNNHGGLGIF_o **ppAVar3;
  AGCDKMOOJGI_c *pAVar4;
  
  if ((DAT_04567592 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<AJNNHGGLGIF>_TypeInfo);
    DAT_04567592 = 1;
  }
  pSVar1 = (System_Collections_Generic_List_AJNNHGGLGIF__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<AJNNHGGLGIF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<AJNNHGGLGIF>__ctor__);
  ppSVar2 = &(__this->fields).LJNCACBBIBD;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_AJNNHGGLGIF__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<AJNNHGGLGIF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<AJNNHGGLGIF>__ctor__);
  ppSVar2 = &(__this->fields).LGIIIFNKHHO;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_AJNNHGGLGIF__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<AJNNHGGLGIF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<AJNNHGGLGIF>__ctor__);
  ppSVar2 = &(__this->fields).IDNEPDGAJCK;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  AJNNHGGLGIF___ctor((AJNNHGGLGIF_o *)__this,0x15,AHDGNOJPPIB,(MethodInfo *)0x0);
  ppAVar3 = &(__this->fields).EOKBEEIMNAF;
  *ppAVar3 = (AJNNHGGLGIF_o *)0x0;
  thunk_FUN_01c20e04(ppAVar3,0);
  pAVar4 = __this->klass;
  (__this->fields).DEMMDPCLLKF = false;
  (__this->fields).EIMDJHJAHKK = 0;
  (*(pAVar4->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(pAVar4->vtable)._12_HNIHOIAMDPC.method);
  pSVar1 = (System_Collections_Generic_List_AJNNHGGLGIF__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<AJNNHGGLGIF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<AJNNHGGLGIF>__ctor__);
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x32D65B4]
// AGCDKMOOJGI$$HNIHOIAMDPC @ RVA 0x32D65B4

void AGCDKMOOJGI__HNIHOIAMDPC
               (AGCDKMOOJGI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AJNNHGGLGIF__o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *a;
  int32_t iVar5;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  
  if ((DAT_04567593 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_5612/*"EachFight"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_9532/*"NoDoubles"*/);
    FUN_01bab630(&StringLiteral_5613/*"EachRound"*/);
    FUN_01bab630(&StringLiteral_11150/*"Refresh"*/);
    DAT_04567593 = 1;
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  FCFEFEBAILK__FAEKHJHILGP(AHDGNOJPPIB,(__this->fields).LJNCACBBIBD,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).LGIIIFNKHHO;
  if (pSVar2 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
    iVar5 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar5) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar5,(MethodInfo *)0x0);
      pSVar2 = (__this->fields).LGIIIFNKHHO;
      if (pSVar2 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) goto LAB_033d6810;
    }
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)pSVar2,
               (System_Collections_Generic_IEnumerable_T__o *)(__this->fields).LJNCACBBIBD,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>_AddRange__);
    pSVar2 = (__this->fields).LJNCACBBIBD;
    if (pSVar2 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)pSVar2,
                 Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_68,
                           Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__
                          );
        if (!bVar1) break;
        if (local_68.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        *(undefined1 *)((long)&local_68.fields._current[3].monitor + 6) = 1;
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_68,Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__)
      ;
      if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_9532/*"NoDoubles"*/,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
          (__this->fields).DEMMDPCLLKF = bVar1;
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_11150/*"Refresh"*/,(MethodInfo *)0x0);
            a = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
            bVar1 = System_String__op_Equality(a,StringLiteral_5613/*"EachRound"*/,(MethodInfo *)0x0);
            if (bVar1) {
              iVar5 = 2;
            }
            else {
              System_String__op_Equality(a,StringLiteral_5612/*"EachFight"*/,(MethodInfo *)0x0);
              iVar5 = 1;
            }
            (__this->fields).EIMDJHJAHKK = iVar5;
            return;
          }
        }
      }
    }
  }
LAB_033d6810:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public AJNNHGGLGIF KOOIAEOAFNH()  [RVA 0x32D688C]
// AGCDKMOOJGI$$KOOIAEOAFNH @ RVA 0x32D688C

AJNNHGGLGIF_o * AGCDKMOOJGI__KOOIAEOAFNH(AGCDKMOOJGI_o *__this,MethodInfo *method)

{
  return (__this->fields).EOKBEEIMNAF;
}


// ===== public void KACMDIEPEMF()  [RVA 0x32D6894]
// AGCDKMOOJGI$$KACMDIEPEMF @ RVA 0x32D6894

void AGCDKMOOJGI__KACMDIEPEMF(AGCDKMOOJGI_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_AJNNHGGLGIF__o *pSVar5;
  AJNNHGGLGIF_o *pAVar6;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Object_array *pSVar7;
  AJNNHGGLGIF_array *pAVar8;
  AJNNHGGLGIF_o **ppAVar9;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567594 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<AJNNHGGLGIF>_TypeInfo);
    FUN_01bab630(&StringLiteral_11009/*"RandomRule::resetRandom ERROR - RandomRule is empty"*/);
    DAT_04567594 = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<AJNNHGGLGIF>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<AJNNHGGLGIF>__ctor__);
  pSVar5 = (__this->fields).LGIIIFNKHHO;
  if (pSVar5 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* try { // try from 033d69c0 to 034d69c7 has its CatchHandler @ 033d6af0 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)pSVar5,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
                    /* try { // try from 033d69d4 to 034d69df has its CatchHandler @ 033d6aec */
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__
                             ), item = local_70.fields._current, bVar3) {
      if ((AJNNHGGLGIF_o *)local_70.fields._current == (AJNNHGGLGIF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = AJNNHGGLGIF__BNNIDPDMOIL((AJNNHGGLGIF_o *)local_70.fields._current,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__;
      if (bVar3) {
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar7 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar7 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 033d6a24 to 034d6a47 has its CatchHandler @ 033d6ae4 */
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar7->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar7->m_Items[(int)uVar1] = item;
                    /* try { // try from 033d6a48 to 034d6ad3 has its CatchHandler @ 033d6878 */
          thunk_FUN_01c20e04(pSVar7->m_Items + (int)uVar1,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      iVar4 = (__this_00->fields)._size;
      if (iVar4 < 1) {
        pSVar5 = (__this->fields).IDNEPDGAJCK;
        if (pSVar5 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* try { // try from 033d6b48 to 034d6b4f has its CatchHandler @ 033d6b50 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033d6b34 with catch @ 033d6b50
                       catch(type#2 @ 00000000) { ... } // from try @ 033d6b48 with catch @ 033d6b50
                        */
          if (0 < (pSVar5->fields)._size) {
            AGCDKMOOJGI__EKFNBHMNHFA(__this,method_00);
            AGCDKMOOJGI__KACMDIEPEMF(__this,method_01);
            return;
          }
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_11009/*"RandomRule::resetRandom ERROR - RandomRule is empty"*/,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar4 = LIIFLGALGNK__HLMBDJOGONJ(iVar4,(MethodInfo *)0x0);
        pAVar6 = (AJNNHGGLGIF_o *)
                 System_Collections_Generic_List<object>__get_Item
                           (__this_00,iVar4,
                            Method_System_Collections_Generic_List<AJNNHGGLGIF>_get_Item__);
        ppAVar9 = &(__this->fields).EOKBEEIMNAF;
        *ppAVar9 = pAVar6;
        thunk_FUN_01c20e04(ppAVar9,pAVar6);
        if ((__this->fields).DEMMDPCLLKF == false) {
          return;
        }
                    /* try { // try from 033d6ad4 to 034d6ad7 has its CatchHandler @ 033d6ae8 */
        pSVar5 = (__this->fields).LGIIIFNKHHO;
                    /* try { // try from 033d6ad8 to 034d6adf has its CatchHandler @ 033d6af4 */
        if (pSVar5 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* try { // try from 033d6ae0 to 034d6b03 has its CatchHandler @ 033d6878 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033d6a24 with catch @ 033d6ae4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033d6ad4 with catch @ 033d6ae8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033d69d4 with catch @ 033d6aec
                        */
          System_Collections_Generic_List<object>__RemoveAt
                    ((System_Collections_Generic_List_object__o *)pSVar5,iVar4,
                     Method_System_Collections_Generic_List<AJNNHGGLGIF>_RemoveAt__);
          lVar2 = Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033d69c0 with catch @ 033d6af0
                        */
          pSVar5 = (__this->fields).IDNEPDGAJCK;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033d6ad8 with catch @ 033d6af4
                        */
          if (pSVar5 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
            pAVar6 = (__this->fields).EOKBEEIMNAF;
            pAVar8 = (pSVar5->fields)._items;
                    /* try { // try from 033d6b04 to 034d6b07 has its CatchHandler @ 033d6b2c */
                    /* try { // try from 033d6b08 to 034d6b33 has its CatchHandler @ 033d6878 */
            (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
            if (pAVar8 != (AJNNHGGLGIF_array *)0x0) {
              uVar1 = (pSVar5->fields)._size;
              if ((uint)pAVar8->max_length <= uVar1) {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar5,
                           (Il2CppObject *)pAVar6,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                return;
              }
                    /* catch() { ... } // from try @ 033d6b04 with catch @ 033d6b2c */
              (pSVar5->fields)._size = uVar1 + 1;
              pAVar8->m_Items[(int)uVar1] = pAVar6;
                    /* try { // try from 033d6b34 to 034d6b3b has its CatchHandler @ 033d6b50 */
              thunk_FUN_01c20e04(pAVar8->m_Items + (int)uVar1);
              return;
                    /* try { // try from 033d6b3c to 034d6b47 has its CatchHandler @ 033d6878 */
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void AFBEEALKOPE(bool CJNHFNHJHPE)  [RVA 0x32D6C44]
// AGCDKMOOJGI$$AFBEEALKOPE @ RVA 0x32D6C44

void AGCDKMOOJGI__AFBEEALKOPE(AGCDKMOOJGI_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04567595 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    DAT_04567595 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  AJNNHGGLGIF__AFBEEALKOPE((AJNNHGGLGIF_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  __this_00 = (__this->fields).LGIIIFNKHHO;
  if (__this_00 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
        return;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      (*(local_38.fields._current)->klass->vtable[9].methodPtr)
                (local_38.fields._current,(ulong)CJNHFNHJHPE,
                 (local_38.fields._current)->klass->vtable[9].method);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<AJNNHGGLGIF> HKNMJCKPHHC()  [RVA 0x32D6DAC]
// AGCDKMOOJGI$$HKNMJCKPHHC @ RVA 0x32D6DAC

System_Collections_Generic_List_AJNNHGGLGIF__o *
AGCDKMOOJGI__HKNMJCKPHHC(AGCDKMOOJGI_o *__this,MethodInfo *method)

{
  return (__this->fields).LJNCACBBIBD;
}

