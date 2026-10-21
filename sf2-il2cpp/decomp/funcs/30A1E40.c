// LAMJOHEKJNJ.IKAELAEDJIM$$POKBBKPLFPK @ RVA 0x30A1E40

bool LAMJOHEKJNJ_IKAELAEDJIM__POKBBKPLFPK
               (LAMJOHEKJNJ_IKAELAEDJIM_o *__this,
               System_Collections_Generic_KeyValuePair_string__LPEBBHNDFCG__o pair,
               MethodInfo *method)

{
  if ((DAT_04566149 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_LPEBBHNDFCG>_get_Value__,
                 pair.fields.key);
    DAT_04566149 = 1;
  }
  if (pair.fields.value != (LPEBBHNDFCG_o *)0x0) {
    return ((pair.fields.value)->fields)._PGKPHJLHJCO_k__BackingField <=
           (__this->fields).currentTime;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

