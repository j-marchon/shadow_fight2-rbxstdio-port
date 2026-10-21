// TypeDefIndex 31
// Namespace: 
// public class JMDPBFOCHHP.PEFEIMKBGAH
// Fields:
//   public HJEODECHNDG NJLMCECHLLG; // 0x10
//   public List<string> AMKLDMEBJDP; // 0x18
//   public List<string> JNCNFDFICON; // 0x20

// ===== public void .ctor()  [RVA 0x2FF97D4]
// JMDPBFOCHHP.PEFEIMKBGAH$$.ctor @ RVA 0x2FF97D4

void JMDPBFOCHHP_PEFEIMKBGAH___ctor(JMDPBFOCHHP_PEFEIMKBGAH_o *__this,MethodInfo *method)

{
  HJEODECHNDG_o *__this_00;
  System_Collections_Generic_List_string__o *pSVar1;
  System_Collections_Generic_List_string__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ac0 & 1) == 0) {
    FUN_01bab630(&HJEODECHNDG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04565ac0 = 1;
    method = extraout_x1;
  }
  __this_00 = (HJEODECHNDG_o *)thunk_FUN_01bda818(HJEODECHNDG_TypeInfo,method);
  HJEODECHNDG___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).NJLMCECHLLG = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  pSVar1 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar2 = &(__this->fields).AMKLDMEBJDP;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar2 = &(__this->fields).JNCNFDFICON;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

