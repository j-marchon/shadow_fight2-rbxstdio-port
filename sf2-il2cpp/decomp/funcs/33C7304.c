// MEMHEPBAJJA.HIAEDCDJJDJ$$OIOHNFFMGLE @ RVA 0x33C7304

MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport_o *
MEMHEPBAJJA_HIAEDCDJJDJ__OIOHNFFMGLE(MEMHEPBAJJA_HIAEDCDJJDJ_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport_o *__this_00;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  System_Enum_o local_58;
  int32_t local_48;
  
  if ((DAT_04567dfa & 1) == 0) {
    FUN_01bab630(&MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport_TypeInfo);
    FUN_01bab630(&MEMHEPBAJJA_OJKJJNJEFKH_TypeInfo);
    FUN_01bab630(&StringLiteral_18731);
    FUN_01bab630(&StringLiteral_9450);
    FUN_01bab630(&StringLiteral_11732);
    FUN_01bab630(&StringLiteral_2114);
    DAT_04567dfa = 1;
    method = extraout_x1;
  }
  __this_00 = (MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport_o *)
              thunk_FUN_01bda818(MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport_TypeInfo,method);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport_o *)0x0) {
    (__this_00->fields).Name = (__this->fields).JIJLBFGKNJK;
    thunk_FUN_01c20e04();
    (__this_00->fields).Value = (__this->fields).JAICMIMBIOA;
    thunk_FUN_01c20e04();
    local_58.klass = (System_Enum_c *)MEMHEPBAJJA_OJKJJNJEFKH_TypeInfo;
    local_58.monitor = (void *)0xffffffffffffffff;
    local_48 = (__this->fields).OGKFDMIMMAD;
    pSVar2 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
    puVar1 = &StringLiteral_9450;
    if ((__this->fields).JHFENACKNPG != (System_Xml_XmlNode_o *)0x0) {
      puVar1 = &StringLiteral_18731;
    }
    pSVar2 = System_String__Concat
                       (StringLiteral_11732,pSVar2,StringLiteral_2114,(System_String_o *)*puVar1,
                        (MethodInfo *)0x0);
    (__this_00->fields).Etc = pSVar2;
    thunk_FUN_01c20e04();
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

