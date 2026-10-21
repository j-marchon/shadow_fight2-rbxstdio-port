// LJNJDFEAIOH$$LDFPGIIGDHK @ RVA 0x3039A2C

GKLPDMLELJF_o *
LJNJDFEAIOH__LDFPGIIGDHK(LJNJDFEAIOH_o *__this,int64_t JNNGPPKMPFD,MethodInfo *method)

{
  int32_t iVar1;
  GKLPDMLELJF_o *__this_00;
  System_String_o *pSVar2;
  MethodInfo_27F86F8 *in_x3;
  System_Collections_Generic_List_long__o *pSVar3;
  System_Nullable_long__o __this_01;
  undefined8 local_50;
  int64_t iStack_48;
  int32_t local_34;
  
  if ((DAT_04565d6a & 1) == 0) {
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_get_Count__);
    FUN_01bab630(&Method_System_Nullable<long>__ctor__);
    FUN_01bab630(&StringLiteral_6270);
    DAT_04565d6a = 1;
  }
  local_34 = 0;
  __this_00 = (GKLPDMLELJF_o *)thunk_FUN_01bda818(GKLPDMLELJF_TypeInfo);
  GKLPDMLELJF___ctor(__this_00,(MethodInfo *)0x0);
  local_50 = 0;
  iStack_48 = 0;
  __this_01.fields.value = 0;
  __this_01.fields._0_8_ = &local_50;
  System_Nullable<long>___ctor(__this_01,Method_System_Nullable<long>__ctor__,in_x3);
  if (__this_00 != (GKLPDMLELJF_o *)0x0) {
    (__this_00->fields).ADEIKPGDIPM.fields.value = iStack_48;
    *(undefined8 *)&(__this_00->fields).ADEIKPGDIPM.fields = local_50;
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = LIIFLGALGNK__HLMBDJOGONJ(1,7,(MethodInfo *)0x0);
    (__this_00->fields).PEBHLKLGDBM = iVar1;
    pSVar3 = (__this->fields).OLPNGMAGBGA;
    if (pSVar3 != (System_Collections_Generic_List_long__o *)0x0) {
      local_34 = (pSVar3->fields)._size;
      pSVar2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(StringLiteral_6270,pSVar2,(MethodInfo *)0x0);
      GKLPDMLELJF__GCAEKDKFFKK(__this_00,pSVar2,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).OLPNGMAGBGA;
      if (pSVar3 != (System_Collections_Generic_List_long__o *)0x0) {
        local_34 = (pSVar3->fields)._size;
        pSVar2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
        pSVar2 = System_String__Concat(StringLiteral_6270,pSVar2,(MethodInfo *)0x0);
        GKLPDMLELJF__OFDBFMLANAH(__this_00,pSVar2,(MethodInfo *)0x0);
        (__this_00->fields).ANAJGHJEEOC = JNNGPPKMPFD;
        (__this_00->fields).PFJPLCAIGJH = 2;
        return __this_00;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

