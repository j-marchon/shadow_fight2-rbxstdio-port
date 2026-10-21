// OOMEDFCGKJB.<>c$$JDICLGGHKCO @ RVA 0x32D3F18

bool OOMEDFCGKJB_<>c__JDICLGGHKCO
               (OOMEDFCGKJB___c_o *__this,
               System_Collections_Generic_KeyValuePair_string__List_BCGLDKLKKDA___o i,
               MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456756b & 1) == 0) {
    FUN_01bab630(&Method_IBLAPCINJBO_BDLEIEHBFAD<BCGLDKLKKDA>__,i.fields.key);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_List<BCGLDKLKKDA>>_get_Value__
                );
    DAT_0456756b = 1;
  }
  bVar1 = IBLAPCINJBO__BDLEIEHBFAD<object>
                    ((System_Collections_Generic_List_T__o *)i.fields.value,
                     Method_IBLAPCINJBO_BDLEIEHBFAD<BCGLDKLKKDA>__);
  return (bool)(~bVar1 & 1);
}

