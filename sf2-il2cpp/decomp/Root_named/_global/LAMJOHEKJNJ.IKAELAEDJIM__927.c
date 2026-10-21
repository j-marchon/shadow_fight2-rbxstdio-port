// TypeDefIndex 927
// Namespace: 
// [CompilerGenerated]
// private sealed class LAMJOHEKJNJ.IKAELAEDJIM
// Fields:
//   public long currentTime; // 0x10
//   public LAMJOHEKJNJ <>4__this; // 0x18

// ===== public void .ctor()  [RVA 0x30A1678]
// LAMJOHEKJNJ.IKAELAEDJIM$$.ctor @ RVA 0x30A1678

void LAMJOHEKJNJ_IKAELAEDJIM___ctor(LAMJOHEKJNJ_IKAELAEDJIM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool POKBBKPLFPK(KeyValuePair<string, LPEBBHNDFCG> pair)  [RVA 0x30A1E40]
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


// ===== internal void PLPOMACLDGN(LPEBBHNDFCG timer)  [RVA 0x30A1E94]
// LAMJOHEKJNJ.IKAELAEDJIM$$PLPOMACLDGN @ RVA 0x30A1E94

void LAMJOHEKJNJ_IKAELAEDJIM__PLPOMACLDGN
               (LAMJOHEKJNJ_IKAELAEDJIM_o *__this,LPEBBHNDFCG_o *timer,MethodInfo *method)

{
  LAMJOHEKJNJ_o *__this_00;
  MethodInfo *in_x3;
  
  if ((timer != (LPEBBHNDFCG_o *)0x0) &&
     (__this_00 = (__this->fields).__4__this, __this_00 != (LAMJOHEKJNJ_o *)0x0)) {
    LAMJOHEKJNJ__OJAKPICKBBC(__this_00,(timer->fields)._COIPKAKHDFP_k__BackingField,false,in_x3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

