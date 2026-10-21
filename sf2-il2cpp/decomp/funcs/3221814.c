// FPPKHNNABAD.KEBLPKFOJNI$$OAHPGDEEAMB @ RVA 0x3221814

bool FPPKHNNABAD_KEBLPKFOJNI__OAHPGDEEAMB
               (FPPKHNNABAD_KEBLPKFOJNI_o *__this,BOFEMGGNODC_o *action,MethodInfo *method)

{
  bool bVar1;
  System_Type_o *left;
  System_Type_o *right;
  
  if ((DAT_04566f3a & 1) == 0) {
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04566f3a = 1;
  }
  if (action != (BOFEMGGNODC_o *)0x0) {
    left = System_Object__GetType((Il2CppObject *)action,(MethodInfo *)0x0);
    right = (__this->fields).questActionType;
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Type_TypeInfo);
    }
    bVar1 = System_Type__op_Equality(left,right,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

