// Nekki.Utils.RaidBetaLogger$$.ctor @ RVA 0x35A4FA4

void Nekki_Utils_RaidBetaLogger___ctor(Nekki_Utils_RaidBetaLogger_o *__this,MethodInfo *method)

{
  SimpleJSON_JSONObject_o *__this_00;
  SimpleJSON_JSONNode_o **ppSVar1;
  System_Collections_Generic_List_GDCFAOAEIMA__o *__this_01;
  System_Collections_Generic_List_GDCFAOAEIMA__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568dfa & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GDCFAOAEIMA>__ctor__);
                    /* try { // try from 036a4ff4 to 037a4fff has its CatchHandler @ 036a5290 */
    FUN_01bab630(&System_Collections_Generic_List<GDCFAOAEIMA>_TypeInfo);
    DAT_04568dfa = 1;
    method = extraout_x1;
  }
  __this_00 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo,method);
                    /* try { // try from 036a5014 to 037a5083 has its CatchHandler @ 036a527c */
  SimpleJSON_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).KJDDOLCFEHM;
  *ppSVar1 = (SimpleJSON_JSONNode_o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_GDCFAOAEIMA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GDCFAOAEIMA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<GDCFAOAEIMA>__ctor__);
  ppSVar2 = &(__this->fields).LMDCMDDCBKA;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  (__this->fields).MCJBHEPCENG = 0xb;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

