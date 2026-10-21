// MEHKKHFBNLM$$.ctor @ RVA 0x33928E4

void MEHKKHFBNLM___ctor(MEHKKHFBNLM_o *__this,int32_t NGPAOPCDOLF,MethodInfo *method)

{
  undefined1 auVar1 [12];
  System_Collections_Generic_List_GMGALNFPLPA__o *__this_00;
  System_Collections_Generic_List_UnityAnimator__o *__this_01;
  System_Collections_Generic_List_UnityAnimator__o **ppSVar2;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o **ppUVar4;
  
  if ((DAT_04567c31 & 1) == 0) {
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<UnityAnimator>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GMGALNFPLPA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<UnityAnimator>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<GMGALNFPLPA>_TypeInfo);
    FUN_01bab630(&StringLiteral_8350);
    DAT_04567c31 = 1;
  }
  __this_00 = (System_Collections_Generic_List_GMGALNFPLPA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GMGALNFPLPA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GMGALNFPLPA>__ctor__);
  (__this->fields).KPLKFOJFEMF = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_List_UnityAnimator__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<UnityAnimator>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<UnityAnimator>__ctor__);
  ppSVar2 = &(__this->fields).PHCHEEPCEOO;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).MFDBACKNCKL = NGPAOPCDOLF;
  __this_02 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_02,StringLiteral_8350,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields)._KDDKJJLDFFO_k__BackingField;
  *ppUVar4 = __this_02;
  thunk_FUN_01c20e04(ppUVar4,__this_02);
  if ((*ppUVar4 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar3 = UnityEngine_GameObject__get_transform(*ppUVar4,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    auVar1._4_8_ = 0;
    auVar1._0_4_ = (float)NGPAOPCDOLF;
    UnityEngine_Transform__set_localPosition
              (pUVar3,(UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
    if (*ppUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(*ppUVar4,(MethodInfo *)0x0);
      if (DAT_0455fa7f == '\0') {
        FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
        DAT_0455fa7f = '\x01';
      }
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localScale
                  (pUVar3,(UnityEngine_Vector3_o)
                          (UnityEngine_Vector3_TypeInfo->static_fields->oneVector).fields,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

