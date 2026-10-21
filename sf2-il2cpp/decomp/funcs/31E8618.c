// MNLIBPAOCLG$$.ctor @ RVA 0x31E8618

void MNLIBPAOCLG___ctor(MNLIBPAOCLG_o *__this,UnityEngine_GameObject_o *JJHEGPBBMLG,
                       MethodInfo *method)

{
  System_Collections_Generic_List_KBECBDOOHCO__o *__this_00;
  System_Collections_Generic_List_KBECBDOOHCO__o **ppSVar1;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Transform_o *parent;
  NHBBOEHHEKG_o **ppNVar2;
  UnityEngine_GameObject_o **ppUVar3;
  
  if ((DAT_04566d79 & 1) == 0) {
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KBECBDOOHCO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KBECBDOOHCO>_TypeInfo);
    FUN_01bab630(&StringLiteral_11208);
    DAT_04566d79 = 1;
  }
  __this_00 = (System_Collections_Generic_List_KBECBDOOHCO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KBECBDOOHCO>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KBECBDOOHCO>__ctor__);
  ppSVar1 = &(__this->fields).GHLEJFDLGHM;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_01 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_01,StringLiteral_11208,(MethodInfo *)0x0);
  ppUVar3 = &(__this->fields).LDAKOINICNJ;
  *ppUVar3 = __this_01;
  thunk_FUN_01c20e04(ppUVar3,__this_01);
  if (((*ppUVar3 != (UnityEngine_GameObject_o *)0x0) &&
      (__this_02 = UnityEngine_GameObject__get_transform(*ppUVar3,(MethodInfo *)0x0),
      JJHEGPBBMLG != (UnityEngine_GameObject_o *)0x0)) &&
     (parent = UnityEngine_GameObject__get_transform(JJHEGPBBMLG,(MethodInfo *)0x0),
     __this_02 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent(__this_02,parent,false,(MethodInfo *)0x0);
    ppNVar2 = &(__this->fields).CNHHLPPHNCO;
    *ppNVar2 = (NHBBOEHHEKG_o *)0x0;
    thunk_FUN_01c20e04(ppNVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

