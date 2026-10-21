// IFAKAIOOHKJ$$EPBENPDCBFE @ RVA 0x3230D58

bool IFAKAIOOHKJ__EPBENPDCBFE
               (IFAKAIOOHKJ_o *__this,NKPJLEMPIKD_GBBCKIANDCN_o *PHCGJGCHKCM,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  System_String_o *CJNHFNHJHPE;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04566fdc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_3048);
    DAT_04566fdc = 1;
  }
  bVar2 = NKPJLEMPIKD__EPBENPDCBFE((NKPJLEMPIKD_o *)__this,PHCGJGCHKCM,(MethodInfo *)0x0);
  bVar3 = false;
  if ((PHCGJGCHKCM != (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) && (bVar2)) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (PHCGJGCHKCM->fields).IGMDDJFPIJL;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar1 = (System_Collections_Generic_Dictionary<string,_object>_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)System_Collections_Generic_Dictionary<string,_object>_TypeInfo)) {
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        CJNHFNHJHPE = (System_String_o *)
                      System_Collections_Generic_Dictionary<object,_object>__get_Item
                                (__this_00,StringLiteral_3048,
                                 Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                                );
        if (CJNHFNHJHPE == (System_String_o *)0x0) {
          CJNHFNHJHPE = (System_String_o *)0x0;
        }
        else if ((Il2CppClass *)CJNHFNHJHPE->klass != (Il2CppClass *)string_TypeInfo) {
          CJNHFNHJHPE = (System_String_o *)0x0;
        }
        bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
        if (!bVar2) {
          bVar2 = System_String__op_Equality
                            ((__this->fields).MHFJEFMNFPH,CJNHFNHJHPE,(MethodInfo *)0x0);
          return bVar2;
        }
      }
    }
    bVar3 = true;
  }
  return bVar3;
}

