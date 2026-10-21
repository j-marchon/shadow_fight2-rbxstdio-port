// TypeDefIndex 2771
// Namespace: 
// public class GameUtils.ACENADIGHII
// Fields:
//   public Dictionary<string, int> MCLOMGCHMIG; // 0x10

// ===== public void GOBKBHNCANP(string KGLJICLJHEL, int DPJIDNBJIBG)  [RVA 0x340F8B4]
// GameUtils.ACENADIGHII$$GOBKBHNCANP @ RVA 0x340F8B4

void GameUtils_ACENADIGHII__GOBKBHNCANP
               (GameUtils_ACENADIGHII_o *__this,System_String_o *KGLJICLJHEL,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  
  if ((DAT_0456806e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_set_Item__);
    DAT_0456806e = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).MCLOMGCHMIG;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_int>__set_Item
              (__this_00,(Il2CppObject *)KGLJICLJHEL,DPJIDNBJIBG,
               Method_System_Collections_Generic_Dictionary<string,_int>_set_Item__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33FDD18]
// GameUtils.ACENADIGHII$$.ctor @ RVA 0x33FDD18

void GameUtils_ACENADIGHII___ctor(GameUtils_ACENADIGHII_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456806f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_int>_TypeInfo);
    DAT_0456806f = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_int>_TypeInfo,method)
  ;
  System_Collections_Generic_Dictionary<object,_int>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
  (__this->fields).MCLOMGCHMIG = (System_Collections_Generic_Dictionary_string__int__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public int MHONHGBIHDO(string KGLJICLJHEL)  [RVA 0x340F91C]
// GameUtils.ACENADIGHII$$MHONHGBIHDO @ RVA 0x340F91C

int32_t GameUtils_ACENADIGHII__MHONHGBIHDO
                  (GameUtils_ACENADIGHII_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method
                  )

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  
  if ((DAT_04568070 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Value__);
    FUN_01bab630(&StringLiteral_11603/*"SHOP_RUBY_SLIDER"*/);
    FUN_01bab630(&StringLiteral_11602/*"SHOP_FREE_SLIDER"*/);
    DAT_04568070 = 1;
  }
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).MCLOMGCHMIG;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary<object,_int>__GetEnumerator
            (&local_60,__this_00,
             Method_System_Collections_Generic_Dictionary<string,_int>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_int>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_MoveNext__
                      );
    if (!bVar1) {
      iVar2 = -1;
      break;
    }
    iVar2 = (int32_t)local_60.fields._current.fields.value;
    bVar1 = System_String__op_Equality
                      ((System_String_o *)local_60.fields._current.fields.key,KGLJICLJHEL,
                       (MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_Dictionary_Enumerator<object,_int>__Dispose
            (&local_60,
             Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_Dispose__);
  bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_11603/*"SHOP_RUBY_SLIDER"*/,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 4;
  }
  else {
    bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_11602/*"SHOP_FREE_SLIDER"*/,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 1;
    }
  }
  return iVar2;
}

