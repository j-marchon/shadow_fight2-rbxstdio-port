// AFFHKININGD$$OKMNIODKDBA @ RVA 0x334244C

System_String_o *
AFFHKININGD__OKMNIODKDBA(AFFHKININGD_o *__this,AJNNHGGLGIF_o *GOAHBPBJCKC,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  System_String_o *CJNHFNHJHPE;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045679a6 & 1) == 0) {
    FUN_01bab630(&AGCDKMOOJGI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
                    /* try { // try from 0344249c to 035424c3 has its CatchHandler @ 03442d58 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
    FUN_01bab630(&HIJGJNFACPG_TypeInfo);
    FUN_01bab630(&ICCLONHCNBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    FUN_01bab630(&PNEKMHMACLG_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
                    /* try { // try from 034424e4 to 035424ef has its CatchHandler @ 03442b48 */
    FUN_01bab630(&StringLiteral_22469);
    DAT_045679a6 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (GOAHBPBJCKC == (AJNNHGGLGIF_o *)0x0) {
LAB_034427f4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar3 = AJNNHGGLGIF__NHGGBEACKBD(GOAHBPBJCKC,(MethodInfo *)0x0);
  if (iVar3 < 0x17) {
                    /* try { // try from 03442518 to 03542523 has its CatchHandler @ 03442c10 */
    if (iVar3 == 0x15) {
      bVar1 = (AGCDKMOOJGI_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (GOAHBPBJCKC->klass->_2).naturalAligment) &&
         ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)AGCDKMOOJGI_TypeInfo)) {
        pSVar4 = AFFHKININGD__OKMNIODKDBA(__this,(AJNNHGGLGIF_o *)GOAHBPBJCKC[1].klass,method);
        return pSVar4;
      }
LAB_034427ec:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(GOAHBPBJCKC);
    }
    if (iVar3 != 0x16) {
      return (System_String_o *)0x0;
    }
                    /* try { // try from 0344253c to 03542547 has its CatchHandler @ 03442b40 */
    bVar1 = (PNEKMHMACLG_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)PNEKMHMACLG_TypeInfo)) goto LAB_034427ec;
                    /* try { // try from 0344255c to 03542567 has its CatchHandler @ 03442a78 */
    if (GOAHBPBJCKC[1].klass == (AJNNHGGLGIF_c *)0x0) goto LAB_034427f4;
                    /* try { // try from 03442568 to 035426b7 has its CatchHandler @ 03441efc */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)GOAHBPBJCKC[1].klass,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__)
      ;
      return (System_String_o *)0x0;
    }
    pSVar4 = AFFHKININGD__OKMNIODKDBA(__this,(AJNNHGGLGIF_o *)local_60.fields._current,method);
LAB_034425b0:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
  }
  else {
    if (iVar3 == 0x29) {
      bVar1 = (HIJGJNFACPG_TypeInfo->_2).naturalAligment;
      if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
         ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)HIJGJNFACPG_TypeInfo)) goto LAB_034427ec;
      if (*(char *)&GOAHBPBJCKC[1].fields.super.GMPFJFBFHCH != '\0') {
        if (GOAHBPBJCKC[1].klass == (AJNNHGGLGIF_c *)0x0) goto LAB_034427f4;
                    /* try { // try from 03442714 to 0354273f has its CatchHandler @ 03442a88 */
        pSVar4 = string_TypeInfo->static_fields->Empty;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_78,(System_Collections_Generic_List_object__o *)GOAHBPBJCKC[1].klass,
                   Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
        local_60.fields._index = local_78.fields._index;
        local_60.fields._version = local_78.fields._version;
        local_60.fields._list = local_78.fields._list;
                    /* try { // try from 03442740 to 03542747 has its CatchHandler @ 03442a70 */
        local_60.fields._current = local_78.fields._current;
                    /* try { // try from 03442748 to 035428c7 has its CatchHandler @ 03441efc */
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_60,
                                  Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__
                                 ), bVar2) {
          CJNHFNHJHPE = AFFHKININGD__OKMNIODKDBA
                                  (__this,(AJNNHGGLGIF_o *)local_60.fields._current,method);
          bVar2 = PCOEHCPGBBG__EDHHJAMCOJH(CJNHFNHJHPE,(MethodInfo *)0x0);
          if (!bVar2) {
            bVar2 = PCOEHCPGBBG__EDHHJAMCOJH(pSVar4,(MethodInfo *)0x0);
            if (!bVar2) {
              pSVar4 = System_String__Concat(pSVar4,StringLiteral_22469,(MethodInfo *)0x0);
            }
            method = (MethodInfo *)0x0;
            pSVar4 = System_String__Concat(pSVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
          }
        }
        goto LAB_034425b0;
      }
    }
    else {
      if (iVar3 != 0x17) {
        return (System_String_o *)0x0;
      }
      bVar1 = (ICCLONHCNBL_TypeInfo->_2).naturalAligment;
      if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
         ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)ICCLONHCNBL_TypeInfo)) goto LAB_034427ec;
      bVar2 = PCOEHCPGBBG__EDHHJAMCOJH((System_String_o *)GOAHBPBJCKC[1].klass,(MethodInfo *)0x0);
      if (!bVar2) {
        return (System_String_o *)GOAHBPBJCKC[1].klass;
      }
    }
    pSVar4 = string_TypeInfo->static_fields->Empty;
  }
  return pSVar4;
}

