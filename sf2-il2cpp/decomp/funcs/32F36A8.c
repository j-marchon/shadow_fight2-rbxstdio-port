// NCNJEIBHGBH$$LEOLPAJFBLF @ RVA 0x32F36A8

System_Collections_Generic_List_MapButton__o *
NCNJEIBHGBH__LEOLPAJFBLF
          (NCNJEIBHGBH_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_MapButton__o *GMFEBFOGDAA;
  MethodInfo *in_x6;
  System_Collections_Generic_List_string__o *pSVar1;
  
  if ((DAT_0456767b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MapButton>_TypeInfo);
    DAT_0456767b = 1;
  }
  pSVar1 = (__this->fields).DMLKGAKPCAB;
  if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    GMFEBFOGDAA = (System_Collections_Generic_List_MapButton__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<MapButton>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)GMFEBFOGDAA,
               Method_System_Collections_Generic_List<MapButton>__ctor__);
    NCNJEIBHGBH__NJMNFMIBOPJ(__this,KCAHJMFOIAG,GMFEBFOGDAA,false,true,false,in_x6);
    return GMFEBFOGDAA;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

