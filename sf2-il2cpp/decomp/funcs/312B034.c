// ABMPAOFAAEI$$NDOEHMMEFGI @ RVA 0x312B034

void ABMPAOFAAEI__NDOEHMMEFGI
               (ABMPAOFAAEI_o *__this,System_String_array *BPMHJKJEALH,int32_t EOANFCGBALI,
               GHACLGGJIKK_o *CELOLGNMKCG,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  GHACLGGJIKK_o **ppGVar4;
  System_String_o *key;
  undefined1 auVar5 [16];
  
  while( true ) {
    if ((DAT_0456668f & 1) == 0) {
      FUN_01bab630(&ABMPAOFAAEI_TypeInfo);
      FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_ContainsKey__)
      ;
      FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_get_Item__);
      FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_set_Item__);
      DAT_0456668f = 1;
    }
    if (BPMHJKJEALH == (System_String_array *)0x0) break;
    uVar1 = (uint)BPMHJKJEALH->max_length;
    if (EOANFCGBALI == uVar1) {
      ppGVar4 = &(__this->fields).CENHINIIPGD;
      *ppGVar4 = CELOLGNMKCG;
      thunk_FUN_01c20e04(ppGVar4);
      return;
    }
    if (uVar1 <= (uint)EOANFCGBALI) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).OKGFMGOALJF
    ;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
    key = BPMHJKJEALH->m_Items[EOANFCGBALI];
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar3,(Il2CppObject *)key,
                       Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_ContainsKey__
                      );
    if (!bVar2) {
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).OKGFMGOALJF;
      auVar5 = thunk_FUN_01bda818(ABMPAOFAAEI_TypeInfo);
      ABMPAOFAAEI___ctor(auVar5._0_8_,auVar5._8_8_);
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary<object,_object>__set_Item
                (pSVar3,(Il2CppObject *)key,(Il2CppObject *)auVar5._0_8_,
                 Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_set_Item__);
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).OKGFMGOALJF
    ;
    if ((pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (__this = (ABMPAOFAAEI_o *)
                 System_Collections_Generic_Dictionary<object,_object>__get_Item
                           (pSVar3,(Il2CppObject *)key,
                            Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_get_Item__
                           ), __this == (ABMPAOFAAEI_o *)0x0)) break;
    EOANFCGBALI = EOANFCGBALI + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

