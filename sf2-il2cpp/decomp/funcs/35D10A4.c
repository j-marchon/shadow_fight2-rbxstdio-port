// UnityAnimator$$.ctor @ RVA 0x35D10A4

void UnityAnimator___ctor(UnityAnimator_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_UnityAnimator_PNHHAMAIIAB__o *__this_00;
  System_Collections_Generic_List_UnityAnimator_PNHHAMAIIAB__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568fe2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UnityAnimator_PNHHAMAIIAB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<UnityAnimator_PNHHAMAIIAB>_TypeInfo);
    DAT_04568fe2 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_UnityAnimator_PNHHAMAIIAB__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<UnityAnimator_PNHHAMAIIAB>_TypeInfo
                                 ,method);
  System_Collections_Generic_List<UnityAnimator_PNHHAMAIIAB>___ctor
            (__this_00,Method_System_Collections_Generic_List<UnityAnimator_PNHHAMAIIAB>__ctor__);
  ppSVar1 = &(__this->fields).IHPLPDKKAEK;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

