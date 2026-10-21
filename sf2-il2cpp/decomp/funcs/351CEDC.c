// JLEKKANADII$$ICCLMLBDKHJ @ RVA 0x351CEDC

void JLEKKANADII__ICCLMLBDKHJ(InControl_InputDevice_o *GIDJIIFPHJK,MethodInfo *method)

{
  int32_t key;
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  System_String_o *a;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361cdf0 with catch @ 0361cedc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361ced0 with catch @ 0361cee0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361cddc with catch @ 0361cee4
                        */
  if ((DAT_0456899b & 1) == 0) {
                    /* try { // try from 0361cefc to 0371ceff has its CatchHandler @ 0361cf28 */
                    /* try { // try from 0361cf00 to 0371cf37 has its CatchHandler @ 0361cc80 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>_get_Item__);
                    /* catch() { ... } // from try @ 0361cefc with catch @ 0361cf28 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>_set_Item__);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
                    /* try { // try from 0361cf38 to 0371cf3f has its CatchHandler @ 0361cf54 */
    DAT_0456899b = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0361cf40 to 0371cf4b has its CatchHandler @ 0361cc80 */
  if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0361cf4c to 0371cf53 has its CatchHandler @ 0361cf54 */
    thunk_FUN_01ba7564(JLEKKANADII_TypeInfo,method);
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0361cf38 with catch @ 0361cf54
                       catch(type#2 @ 00000000) { ... } // from try @ 0361cf4c with catch @ 0361cf54
                        */
  if ((GIDJIIFPHJK != (InControl_InputDevice_o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               JLEKKANADII_TypeInfo->static_fields->BJFJBJFACFM,
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                      (pSVar2,(GIDJIIFPHJK->fields).SortOrder,
                       Method_System_Collections_Generic_Dictionary<int,_string>_ContainsKey__);
    if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(JLEKKANADII_TypeInfo);
    }
    key = (GIDJIIFPHJK->fields).SortOrder;
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             JLEKKANADII_TypeInfo->static_fields->BJFJBJFACFM;
    if (bVar1) {
      if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        a = (System_String_o *)
            System_Collections_Generic_Dictionary<int,_object>__get_Item
                      (pSVar2,key,
                       Method_System_Collections_Generic_Dictionary<int,_string>_get_Item__);
        bVar1 = System_String__op_Inequality
                          (a,(GIDJIIFPHJK->fields)._Name_k__BackingField,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                 JLEKKANADII_TypeInfo->static_fields->BJFJBJFACFM;
        if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          System_Collections_Generic_Dictionary<int,_object>__set_Item
                    (pSVar2,(GIDJIIFPHJK->fields).SortOrder,
                     (Il2CppObject *)(GIDJIIFPHJK->fields)._Name_k__BackingField,
                     Method_System_Collections_Generic_Dictionary<int,_string>_set_Item__);
          JLEKKANADII__HNJCEIGCIGM(GIDJIIFPHJK,method_00);
          return;
        }
      }
    }
    else if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      FUN_03f936b0(&PTR_StringLiteral_17724_04208000,pSVar2,key,
                   (GIDJIIFPHJK->fields)._Name_k__BackingField);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

