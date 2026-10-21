// OOMEDFCGKJB.OBDIGPIEMKH$$KABEDNCEEBM @ RVA 0x32D4264

bool OOMEDFCGKJB_OBDIGPIEMKH__KABEDNCEEBM
               (OOMEDFCGKJB_OBDIGPIEMKH_o *__this,
               System_Collections_Generic_KeyValuePair_string__List_BCGLDKLKKDA___o p,
               MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567572 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_List<BCGLDKLKKDA>>_get_Key__
                 ,p.fields.key,p.fields.value);
    DAT_04567572 = 1;
  }
  bVar1 = System_String__op_Equality(p.fields.key,(__this->fields).lang,(MethodInfo *)0x0);
  return bVar1;
}

