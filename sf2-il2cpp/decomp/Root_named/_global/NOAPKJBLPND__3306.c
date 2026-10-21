// TypeDefIndex 3306
// Namespace: 
// public class NOAPKJBLPND
// Fields:
//   private readonly Dictionary<int, DEFIPIDEFOO> MAKFKJPLHCF; // 0x10

// ===== public void KKKBEBDBBEJ(DEFIPIDEFOO OAOLCGAIILM)  [RVA 0x3521F70]
// NOAPKJBLPND$$KKKBEBDBBEJ @ RVA 0x3521F70

void NOAPKJBLPND__KKKBEBDBBEJ(NOAPKJBLPND_o *__this,DEFIPIDEFOO_o *OAOLCGAIILM,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  
  if ((DAT_045689d1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>_set_Item__);
    DAT_045689d1 = 1;
  }
  if ((OAOLCGAIILM != (DEFIPIDEFOO_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                  (__this->fields).MAKFKJPLHCF,
     __this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<int,_object>__set_Item
              (__this_00,(OAOLCGAIILM->fields).IGLHCNLNIPK,(Il2CppObject *)OAOLCGAIILM,
               Method_System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>_set_Item__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public DEFIPIDEFOO ECLKNKGJKMC(int OGPGLGPMEPD)  [RVA 0x3521FD0]
// NOAPKJBLPND$$ECLKNKGJKMC @ RVA 0x3521FD0

DEFIPIDEFOO_o *
NOAPKJBLPND__ECLKNKGJKMC(NOAPKJBLPND_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  undefined8 uVar2;
  Il2CppObject *arg0;
  System_String_o *pSVar3;
  System_ArgumentException_o *__this_01;
  int32_t local_2c;
  DEFIPIDEFOO_o *local_28;
  
  if ((DAT_045689d2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>_TryGetValue__);
    DAT_045689d2 = 1;
  }
  local_28 = (DEFIPIDEFOO_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).MAKFKJPLHCF;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<int,_object>__TryGetValue
                      (__this_00,OGPGLGPMEPD,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>_TryGetValue__)
    ;
    if (bVar1) {
      return local_28;
    }
    local_2c = OGPGLGPMEPD;
    uVar2 = thunk_FUN_01bb9178(&int_TypeInfo);
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(uVar2,&local_2c);
    pSVar3 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_3831/*"Can't find currency by id '{0}'"*/);
    pSVar3 = System_String__Format(pSVar3,arg0,(MethodInfo *)0x0);
    thunk_FUN_01bb9178(&System_ArgumentException_TypeInfo);
    __this_01 = (System_ArgumentException_o *)thunk_FUN_01bda818();
    System_ArgumentException___ctor(__this_01,pSVar3,(MethodInfo *)0x0);
    uVar2 = thunk_FUN_01bb9178(&Method_NOAPKJBLPND_ECLKNKGJKMC__);
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(__this_01,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public DEFIPIDEFOO BHJOLIJDBLO(string KGLJICLJHEL)  [RVA 0x35220B4]
// NOAPKJBLPND$$BHJOLIJDBLO @ RVA 0x35220B4

DEFIPIDEFOO_o *
NOAPKJBLPND__BHJOLIJDBLO(NOAPKJBLPND_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  DEFIPIDEFOO_o *pDVar2;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  
  if ((DAT_045689d3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>_GetEnumerator__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_DEFIPIDEFOO>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_DEFIPIDEFOO>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_DEFIPIDEFOO>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_DEFIPIDEFOO>_get_Value__);
    DAT_045689d3 = 1;
  }
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).MAKFKJPLHCF;
  if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary<int,_object>__GetEnumerator
            (&local_60,__this_00,
             Method_System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_Dictionary_Enumerator<int,_object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_Dictionary_Enumerator<int,_DEFIPIDEFOO>_MoveNext__
                      );
    pDVar2 = (DEFIPIDEFOO_o *)local_60.fields._current.fields.value;
    if (!bVar1) {
      pDVar2 = (DEFIPIDEFOO_o *)0x0;
      break;
    }
    if ((DEFIPIDEFOO_o *)local_60.fields._current.fields.value == (DEFIPIDEFOO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((DEFIPIDEFOO_Fields *)((long)local_60.fields._current.fields.value + 0x10))
                       ->JIJLBFGKNJK,KGLJICLJHEL,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_Dictionary_Enumerator<int,_object>__Dispose
            (&local_60,
             Method_System_Collections_Generic_Dictionary_Enumerator<int,_DEFIPIDEFOO>_Dispose__);
  return pDVar2;
}


// ===== public void KKKBEBDBBEJ(int OGPGLGPMEPD, string JCLPIKHEKBB, string KGLJICLJHEL)  [RVA 0x3522220]
// NOAPKJBLPND$$KKKBEBDBBEJ @ RVA 0x3522220

void NOAPKJBLPND__KKKBEBDBBEJ
               (NOAPKJBLPND_o *__this,int32_t OGPGLGPMEPD,System_String_o *JCLPIKHEKBB,
               System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  DEFIPIDEFOO_o *__this_00;
  
  if ((DAT_045689d4 & 1) == 0) {
    FUN_01bab630(&DEFIPIDEFOO_TypeInfo);
    DAT_045689d4 = 1;
  }
  __this_00 = (DEFIPIDEFOO_o *)thunk_FUN_01bda818(DEFIPIDEFOO_TypeInfo);
  DEFIPIDEFOO___ctor(__this_00,OGPGLGPMEPD,JCLPIKHEKBB,KGLJICLJHEL,(MethodInfo *)0x0);
  NOAPKJBLPND__KKKBEBDBBEJ(__this,__this_00,(MethodInfo *)JCLPIKHEKBB);
  return;
}


// ===== public void .ctor()  [RVA 0x35222A4]
// NOAPKJBLPND$$.ctor @ RVA 0x35222A4

void NOAPKJBLPND___ctor(NOAPKJBLPND_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045689d5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>_TypeInfo);
    DAT_045689d5 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>__ctor__);
  (__this->fields).MAKFKJPLHCF =
       (System_Collections_Generic_Dictionary_int__DEFIPIDEFOO__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public IReadOnlyDictionary<int, DEFIPIDEFOO> CCMBHHGHDOG()  [RVA 0x352232C]
// NOAPKJBLPND$$CCMBHHGHDOG @ RVA 0x352232C

System_Collections_Generic_IReadOnlyDictionary_int__DEFIPIDEFOO__o *
NOAPKJBLPND__CCMBHHGHDOG(NOAPKJBLPND_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_IReadOnlyDictionary_int__DEFIPIDEFOO__o *)
         (__this->fields).MAKFKJPLHCF;
}


// ===== public void DGLJCGNHLIG()  [RVA 0x3522334]
// NOAPKJBLPND$$DGLJCGNHLIG @ RVA 0x3522334

void NOAPKJBLPND__DGLJCGNHLIG(NOAPKJBLPND_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045689d6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>_Clear__);
    DAT_045689d6 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).MAKFKJPLHCF;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int,_object>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<int,_DEFIPIDEFOO>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

