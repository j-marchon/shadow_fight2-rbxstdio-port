// TypeDefIndex 73
// Namespace: 
// public class RaidConfig.ONCGGLEAIFH
// Fields:
//   public List<string> KCDBFFCLCOG; // 0x10
//   public List<string> MHLCLANFAAO; // 0x18
//   public List<string> DOALOOOJNPD; // 0x20
//   public List<MGNDHCBAPEN<Color, Color>> DFIBIHHGIPG; // 0x28

// ===== public void .ctor()  [RVA 0x2FFBF04]
// RaidConfig.ONCGGLEAIFH$$.ctor @ RVA 0x2FFBF04

void RaidConfig_ONCGGLEAIFH___ctor(RaidConfig_ONCGGLEAIFH_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  System_Collections_Generic_List_string__o **ppSVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_Color__Color___o *__this_00;
  System_Collections_Generic_List_MGNDHCBAPEN_Color__Color___o **ppSVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ae3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04565ae3 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<string>__ctor__);
  (__this->fields).KCDBFFCLCOG = pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  pSVar1 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar2 = &(__this->fields).MHLCLANFAAO;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar2 = &(__this->fields).DOALOOOJNPD;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  __this_00 = (System_Collections_Generic_List_MGNDHCBAPEN_Color__Color___o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>__ctor__);
  ppSVar3 = &(__this->fields).DFIBIHHGIPG;
  *ppSVar3 = __this_00;
  thunk_FUN_01c20e04(ppSVar3,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

