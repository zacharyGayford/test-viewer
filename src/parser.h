#include <libxml++/libxml++.h>

// https://developer-old.gnome.org/libxml++-tutorial/stable/ch02s02.html
// https://www.microfocus.com/documentation/visual-cobol/vc60/DevHub/GUID-8BC34B95-A81A-4E36-B763-07FB24982DEE.html

class ParserXML : public xmlpp::SaxParser {
	
	public:

		ParserXML ();
		~ParserXML ();

	protected:

		void on_start_document () override;
		void on_end_document () override;
		void on_start_element (const xmlpp::ustring& name, const AttributeList& properties) override;
		void on_end_element (const xmlpp::ustring& name) override;
		void on_characters (const xmlpp::ustring& name) override;
		void on_comment (const xmlpp::ustring& text) override;
		void on_warning (const xmlpp::ustring& test) override;
		void on_error (const xmlpp::ustring& text) override;
		void on_fatal_error (const xmlpp::ustring& text) override;

};
