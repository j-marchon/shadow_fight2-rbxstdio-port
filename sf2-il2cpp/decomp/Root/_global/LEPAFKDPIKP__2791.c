// TypeDefIndex 2791
// Namespace: 
// public class LEPAFKDPIKP
// Fields:
//   public float JAICMIMBIOA; // 0x10
//   public List<string> MNJCMDFOOHH; // 0x18

// ===== public void .ctor()  [RVA 0x34159BC]
// LEPAFKDPIKP$$.ctor @ RVA 0x34159BC

void LEPAFKDPIKP___ctor(LEPAFKDPIKP_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045680a2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045680a2 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).MNJCMDFOOHH;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3415A44]
// LEPAFKDPIKP$$HNIHOIAMDPC @ RVA 0x3415A44

void LEPAFKDPIKP__HNIHOIAMDPC
               (LEPAFKDPIKP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *__this_00;
  System_String_array *collection;
  System_Collections_Generic_List_string__o *__this_01;
  float fVar3;
  
  if ((DAT_045680a3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045680a3 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
      fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
      (__this->fields).JAICMIMBIOA = fVar3;
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
        __this_00 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        if (__this_00 == (System_String_o *)0x0) {
          return;
        }
        collection = System_String__Split(__this_00,0x7c,0,(MethodInfo *)0x0);
        __this_01 = (__this->fields).MNJCMDFOOHH;
        if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
          System_Collections_Generic_List<object>__AddRange
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (System_Collections_Generic_IEnumerable_T__o *)collection,
                     Method_System_Collections_Generic_List<string>_AddRange__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IFHLNBHADIG(string CJNHFNHJHPE)  [RVA 0x3415B64]
// LEPAFKDPIKP$$IFHLNBHADIG @ RVA 0x3415B64

bool LEPAFKDPIKP__IFHLNBHADIG(LEPAFKDPIKP_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this_00;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045680a4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    DAT_045680a4 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).MNJCMDFOOHH;
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_03515c2c;
    }
    if ((System_String_o *)local_48.fields._current == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__Equals
                      ((System_String_o *)local_48.fields._current,CJNHFNHJHPE,(MethodInfo *)0x0);
  } while (!bVar2);
  iVar3 = 4;
LAB_03515c2c:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  return bVar1 && iVar3 == 4;
}

